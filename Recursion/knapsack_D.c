#include <stdio.h>
#include <stdlib.h>

// Structure to represent an item
struct Item {
    int value;
    int weight;
};

// Function to compare two items based on their value/weight ratio
int compare(const void *a, const void *b) {
    double ratio1 = (double)((struct Item *)a)->value / ((struct Item *)a)->weight;
    double ratio2 = (double)((struct Item *)b)->value / ((struct Item *)b)->weight;
    if (ratio1 < ratio2)
        return 1;
    else if (ratio1 > ratio2)
        return -1;
    else
        return 0;
}

// Function to solve the knapsack problem using greedy approach
double knapsackGreedy(struct Item items[], int n, int capacity) {
    // Sort items based on value/weight ratio in non-increasing order
    qsort(items, n, sizeof(struct Item), compare);

    double totalValue = 0.0; // Total value of items selected
    int currentWeight = 0; // Current weight in the knapsack

    // Iterate through each item and add it to the knapsack if there's space
    for (int i = 0; i < n; i++) {
        // If adding the entire item is possible, add it and subtract its weight
        if (currentWeight + items[i].weight <= capacity) {
            totalValue += items[i].value;
            currentWeight += items[i].weight;
        }
        // Otherwise, add a fraction of the item to fill the remaining capacity
        else {
            int remainingCapacity = capacity - currentWeight;
            totalValue += items[i].value * ((double)remainingCapacity / items[i].weight);
            break;
        }
    }

    return totalValue;
}

int main() {
    struct Item items[] = {{3, 2}, {4, 3}, {5, 4}, {6, 5}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 5;
    
    double maxValue = knapsackGreedy(items, n, capacity);
    printf("Maximum value: %.2f\n", maxValue);

    return 0;
}
