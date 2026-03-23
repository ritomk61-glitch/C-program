#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data = 12;
    second->next = second;

    third->data = 13;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = NULL;

    printf("%d \n", head->data);
    printf("%d \n", second->data);
    printf("%d", third->data);
    //   printf("%d" ,  -> data );

    return 0;
}
