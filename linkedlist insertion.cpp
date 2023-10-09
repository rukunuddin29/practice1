#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    return newNode;
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    int numNodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    
for (int i = 0; i < numNodes; i++) {
        int value;
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &value);
        head = insertAtBeginning(head, value);
    }
    
    printf("Linked list after insertion: ");
    displayList(head);

    return 0;
}






