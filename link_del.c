// A complete working C program
// to demonstrate deletion in
// singly linked list
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
    int data;
    struct Node* next;
};

/* Given a reference (pointer to pointer) to the head of a
list and an int, inserts a new node on the front of the
list. */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node);

/* Given a reference (pointer to pointer) to the head of a
list and a key, deletes the first occurrence of key in
linked list */
void deleteNode(struct Node *list, int key)
{

    struct Node **lpp;
    for(lpp = &list; *lpp != NULL; lpp = &(*lpp)->next)
        {
        if((*lpp)->data == key)
            {
            printList(*lpp);
            *lpp = (*lpp)->next;
            printList(*lpp);
            printList(list);
			break;
            }
        }
    

}

// This function prints contents of linked list starting
// from the given node
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("\n %d \n", node->data);
        node = node->next;
    }
}

// Driver code
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);
    deleteNode(head, 2);
    puts("\nLinked List after Deletion of 2: ");
    printList(head);
    return 0;
}

