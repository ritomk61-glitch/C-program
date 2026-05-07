#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* insert(struct node* head, int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

int search(struct node* head, int key) {
    int pos = 1;
    while (head != NULL) {
        if (head->data == key)
            return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

int main() {
    struct node* head = NULL;
    int n, i, x, key;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        head = insert(head, x);
    }

    scanf("%d", &key);

    int result = search(head, key);

    if (result != -1)
        printf("Element found at position %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}