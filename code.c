/*include<stdio.h>
int main(){
    int thou , hun , ten , one , n;
    printf("enter your number:");
    scanf("%d" , & n);
    hun = (n %1000)/100;
    ten =(n/10)%10;
    one = n %10;
    thou = (n/1000);

    printf("your hun is %d\n" , hun);
    printf("your ten is %d\n" , ten);
    printf("your one is %d\n" , one);
    printf("you thou is %d "  , thou);
    return 0;
}*/

// ! for assinment Demonstrate printf and scanf

/*#include<stdio.h>
int main(){
    int n ; char a ; float d;
    printf("enter your type here:");
    scanf("%d %c %f",&n , &a , &d );

    printf("%d is interger\n.%c is float\n.%f is float number " , n , a , d);
    return 0;

}*/

// //*build a calculator using switch methode

// #include<stdio.h>
// int main(){
//     float a , b ;
//     char op;
//     printf("enter your first value a is:");
//     scanf("%f" , &a);
//     printf("enter the operation under:");
//     scanf("%c" , &op);
//     printf("enter your secound value b is:");
//     scanf("%f" , &b);
//     switch (op)
//     {
//     case '+':
//        printf("your sum is:%.2f",a+b);
//         break;

//     case '-':
//        printf("you minus is:%.2f", a-b);
//        break;
//     case '*':
//     printf("you multiply is : %.2f",a*b);
//     break;
//     case '/':
//     if(b != 0){
//         printf("your divied is:%.2f",a/b);
//         break;
//     }
//     else{
//         printf("you enter negative number.please enter positive number ");
//         break;
//     }

//     default:
//     printf("you calculation is finished.thank you");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     long fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//         fact *= i;
//     printf("Factorial = %d\n", fact);
//     return 0;
// #include<stdio.h>

// int factorial(int a);

// int main(){
//     int result = factorial(5);
//     printf("%d", result);
//     return 0;
// }

// int factorial(int a){
//     if(a == 0){
//         return 1;
//     }
//     int fact1 = factorial(a - 1);
//     int factm = fact1 * a;
//     return factm;   // return value
// }

// !quesstion no 23

