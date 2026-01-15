import java.io.*;
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedListFile {
    Node head;
    public void insert(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
    }

    public void display() {
        Node temp = head;
        if (temp == null) {
            System.out.println("List is empty");
            return;
        }

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    // Save linked list to file
    public void saveToFile(String filename) {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(filename))) {
            Node temp = head;
            while (temp != null) {
                bw.write(Integer.toString(temp.data));
                bw.newLine();
                temp = temp.next;
            }
            System.out.println("Linked List saved to file.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Load linked list from file
    public void loadFromFile(String filename) {
        head = null; // clear existing list

        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = br.readLine()) != null) {
                insert(Integer.parseInt(line));
            }
            System.out.println("Linked List loaded from file.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

// Main class
public class LinkedListWithFileHandling {
    public static void main(String[] args) {

        LinkedListFile list = new LinkedListFile();

        // Insert data
        list.insert(10);
        list.insert(20);
        list.insert(30);
        list.insert(40);

        System.out.println("Original Linked List:");
        list.display();

        // Save to file
        list.saveToFile("linkedlist.txt");

        // Create new list and load data
        LinkedListFile newList = new LinkedListFile();
        newList.loadFromFile("linkedlist.txt");

        System.out.println("\nLinked List after loading from file:");
        newList.display();
    }
}
