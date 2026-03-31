#include <stdio.h>

void swap(int x , int y);
void _swap(int *a , int *b);
int main()
{

 
   int num=23;
    int *ptr=&num;
    int _age = *ptr;
    printf("%d",_age);


    // ?address


    printf("%p",&_age);

    // ! Question-1

    int x;
    int *ptr;

    ptr = &x;

    *ptr = 0;

    printf("x=%d\n",x);
    printf("*ptr=%d\n\n",*ptr);

     *ptr+=5;

    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    // ! Question-2-----pointer to pointer

    int i =10;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d",**pptr);

    // *pointer in function call

  
   
    int a = 10; 
    int b = 20;

    _swap( &a,  &b);

     printf("a=%d and b=%d " , a , b);

    return 0;
}

  // ! call by value

void swap ( int x , int y)
{
  int t;
  t=x;
  x=y;
  y=t;

  printf("a=%d and b=%d " , x , y);
      
}

// *call by reference

void _swap(int *a , int *b){
    int t = *a;

    *a=*b;
    *b = t;

}

