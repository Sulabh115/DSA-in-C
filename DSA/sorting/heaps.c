#include <stdio.h>

#define MAX_HEAP_SIZE 100

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify a subtree rooted at index i
void heapify(int heap[], int n, int i) {
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // Left child
    int right = 2 * i + 2;  // Right child

    // If left child is larger than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && heap[right] > heap[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        // Recursively heapify the affected sub-tree
        heapify(heap, n, largest);
    }
}

// Function to build the heap
void buildHeap(int heap[], int n) {
    // Index of the last non-leaf node
    int startIdx = (n / 2) - 1;

    // Perform reverse level order traversal
    // from the last non-leaf node and heapify each node
    for (int i = startIdx; i >= 0; i--) {
        heapify(heap, n, i);
    }
}

// Function to print the heap
void printHeap(int heap[], int n) {
    printf("Heap elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int heap[MAX_HEAP_SIZE];
    int n;

    printf("Enter the number of elements in the heap: ");
    scanf("%d", &n);

    printf("Enter the elements of the heap: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &heap[i]);
    }

    buildHeap(heap, n);

    printf("Heap built successfully.\n");
    printHeap(heap, n);


    return 0;
}
