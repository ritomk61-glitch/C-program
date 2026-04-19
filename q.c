// question - 2 

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* insert(struct node* head, int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }
 struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    return head;
}


void display(struct node* head) {
    struct node* temp = head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }


    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
    int main() {
    struct node* head = NULL;

    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);

    display(head);

    return 0;
}