#include <stdio.h>
#include <stdlib.h>


struct Job {
    int id;      
    int deadline; 
    int profit;   
};

int compareJobs(const void *a, const void *b) {
    return ((struct Job *)b)->profit - ((struct Job *)a)->profit;
}

void jobSequencing(struct Job jobs[], int n) {
    qsort(jobs, n, sizeof(struct Job), compareJobs);

    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }
    }

    int slots[maxDeadline];
    for (int i = 0; i < maxDeadline; i++) {
        slots[i] = -1; 
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slots[j] == -1) {
                slots[j] = i;
                break;
            }
        }
    }

    
    printf("Job Sequence: ");
    for (int i = 0; i < maxDeadline; i++) {
        if (slots[i] != -1) {
            printf("%d ", jobs[slots[i]].id);
        }
    }
    printf("\n");

    int totalProfit = 0;
    for (int i = 0; i < maxDeadline; i++) {
        if (slots[i] != -1) {
            totalProfit += jobs[slots[i]].profit;
        }
    }
    printf("Total Profit: %d\n", totalProfit);
}


int main() {
    struct Job jobs[] = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};
    int n = sizeof(jobs) / sizeof(jobs[0]);

    printf("Given Jobs:\n");
    printf("Job ID   Deadline   Profit\n");
    for (int i = 0; i < n; i++) {
        printf("%-8d%-11d%-7d\n", jobs[i].id, jobs[i].deadline, jobs[i].profit);
    }

    printf("\n");

    jobSequencing(jobs, n);

    return 0;
}
