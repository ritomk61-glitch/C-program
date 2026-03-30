#include<stdio.h>
#include<stdlib.h>

int main() {

    // *malloc memory
    // int i;
    // int *ptr;

    // ptr = (int *) malloc(5 * sizeof(int));
   
    // for(i = 0; i < 5; i++) {
    //     printf("Enter price of item %d: ", i + 1);
    //     scanf("%d", &ptr[i]);
    // }  

    // printf("You entered:\n");
    // for(i = 0; i < 5; i++) {
    //     printf("Item %d price = %d\n", i + 1, ptr[i]);
    // }

    // free(ptr);

    // int *ptr;
    // int n;
    // printf("Enter n:");
    // scanf("%d", &n);

    // ptr = (int *) malloc (n * sizeof(int));

    // for(int i =0 ; i<n ; i++){
    //     printf("%d \n",ptr[i]);
    // }


    // * Realloc and also used calloc here

    int *ptr;
    ptr = (int *) calloc(5,sizeof(int));
    printf("Enter 5 number:");

    for(int i =0 ; i<5 ; i++){
        scanf("%d",&ptr[i]);
    } 
    ptr = realloc(ptr,8);
    printf("Enter 8 number:");
    for(int i = 0 ; i<8 ; i++){
        scanf("%d", &ptr[i]);
    }

    // ? print
    printf("your 8 number is\n");
for(int i = 0 ; i<8 ; i++){
        printf("your %d number is %d \n", i,ptr[i]);
    }
        printf("your 5 number is\n");
for(int i = 0 ; i<5 ; i++){
        printf("your %d number is %d \n", i,ptr[i]);
    }


     
    return 0;
}