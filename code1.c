//! even or odd

/*#include<stdio.h>
int main(){
    int n ;
    printf("enter your number here:");
    scanf("%d",&n);
    if(n>0){

        if(n%2==0){
            printf("this is odd number");
        }
        else{
            printf("this is even number.");
        }
    }
    else{
        printf("you enter the negetive number.please enter the positive number.Try again.Thank you");
    }
    return 0;
}
*/

// ??maping grade

/* #include<stdio.h>
int main(){
    int n;
    printf("Enter your exam mark here:");
    scanf("%d",&n);
    if(n>0 && n<100){
        if(n<=32){
            printf("you are fail.you should again sit the exam");
        }
        else if( n>=33 && n<=40){
            printf("you are pass the exam.your grade is c.focus you study buddy not girls.");
        }
        else if(n>=41 && n<=50){
            printf("your grade is b.next time you should do better.keep trying.");
        }
        else if(n>=51 && n<=60){
            printf("your grade is A-.next time you should do better.keep trying");
        }
        else if(n>=61 && n<=70){
            printf("your grade is A.you are so close buddy.keep trying");
        }
        else if(n>=71 && n<=80){
            printf("AHH!! you got A.you are so close to terget.keep trying");
        }
        else{
            printf("GREAT!!you got  A+.congratulations");
        }
    }
    else{
        printf("you enter the wrong number.");
    }
    return 0;
}
    */

//*vowel or consonat

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter your letter:");;
//     scanf("%c",&ch);
//     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//         printf("%d is a vowel.",ch);
//     }
//     else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
//         printf("%d is a vowel .",ch);
//     }
//     else{
//         printf("%d is a consonant.",ch);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a ;
//     printf("enter your name here:");
//     scanf("%d",&a);
//     if(a<0){
//         printf("this is negative number.please enter the positive number .");

//     }
//     else{
//         printf("this  is negative numbr.");
//     }
//     return 0 ;

// }

//?? find the year is leap year or not

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter your letter here:");
//     scanf("%c",&ch);
//     if( (ch >='a' && ch<='b') ||  ch >='A' && ch <='Z' ){
//         if(( ch>= 'A' && ch<='Z')){
//             ch=ch+32;
//         }
//         if( ch == 'a' || ch == 'e' || ch == 'i'  || ch == 'o' || ch == 'u'){
//             printf("this is vowel");
//         }
//         else{
//             printf("this is consonant");
//         }
//     }
//     else{
//         printf("you enter wrong");
//     }
//     return 0;
// }

// & Factorial of a number

// #include<stdio.h>
// int main(){
//     int fact=1,n;
//     printf("enter your factorial number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// *simple calculator

// #include<stdio.h>
// int main(){
//     int a , b ;
//     char c;
//     printf("enter first value:");
//     scanf("%d",&a);
//     printf("enter second value:");
//     scanf("%d",&b);

//     printf("enter your expression (+,-,*,/):");
//     scanf(" %c",&c);

//     switch (c)
//     {
//     case '+':
//         printf("%d",a+b);
//         break;

//     default:
//         break;
//     }
//     return 0;
// }

// ?celcius to fahrenheit

// #include<stdio.h>
// int main(){
//     int c;
//     float f;
//     printf("enter celcius:");
//     scanf("%d",&c);
//     f=(c * 9/5) + 32;

//     printf("%f",f);

//     return 0;

// }

// ?circle

// #include<stdio.h>
// #define PI 3.1416

// int main(){
//     int r=5,m,a;
//     m=2*PI*r*r;

//     a=2*PI*r;

//     printf("%d\n",m);
//     printf("%.2f\n",a);
//     return 0;

// }

// ? upper to lower

// #include<stdio.h>
// int main(){
//     char ch='A',small;

//     small=ch+32;

//     printf("%c",small);
//     return 0;
// }

// !tryangle

// #include<stdio.h>
// int main(){
//     int n=5;
//     for(int i=1;i<=n ; i++){
//         for(int j=1;j<=n ; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=i ; j--){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// ?eneter 10 value in loops
// #include<stdio.h>
// int main(){
//     int a=33;
//     int *ptr=&a;
//     int _a=*ptr;

//     int b=55;
//     int *p=&b;

//     printf("%d\n",_a);//?value at pointer address
//     printf("%p\n",*ptr);//* p is format specifier for pointer address
//     printf("%d\n",a);//!value of a
//     printf("%p\n",*p);
//     return 0;
// }
// ?question no 23

// #include<stdio.h>
// int main(){
//     int sum=0,n;
//     printf("enter your array number:");
//     scanf("%d",&n);
//     int arr[n];

//     printf("enter your array values here:\n");

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("the sum of array is:%d",sum);

//     printf("\n your average is :%d",sum/n);
//     return 0;
// }

// ? question no 21

// #include<stdio.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0; i<10;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }


// & function

// #include<stdio.h>
// int swop (int , int);
// int main(){
//     int a,b;
//     printf("enter your first number:");
//     scanf("%d",&a);
//     printf("enter your second number:");
//     scanf("%d",&b);
//     printf("before swap vale is a=%d and b=%d",a,b);
//     swop(a,b);
//     return 0;
// }

// int swop(int a,int b){
//     int tem=a;
//     a=b;
//     b=tem;
//     printf("\nafter swaping value is a=%d and b=%d",a,b);
// }

// !macro function

// #include<stdio.h>
// #define SQUARE(x)((x)+(x))
// int main(){
//     int n=12;

//    int s=SQUARE((n*2)+(n*2));

//    printf("%d",s);
//    return 0;
// }
// *lower to upper

// #include<stdio.h>
// int main(){
//     int n ,i;
//     char bigger;
//     printf("array sixe:");
//     scanf("%d",&n);
//     char arr[n];
//     printf("enter your small charchecter(a-z):");
//     for(int i=0; i<n ; i++){
//         scanf("%c",&arr[i]);    
//     }
//     bigger=arr[i]-32;
//     printf("%c",bigger);
//     return 0;
// }
// #include<stdio.h>
// struct address{
//     char city[30];
//     int pin;

// };
// struct student{
//     int id;
//     char name[66];
//     char address[88];
//     struct address add;
// };
// struct student1{
//     int id;
//     char name[66];
//     char address[88];
//     struct address add;
    
// };

// int main(){
//   struct student s={232323323,"ritom","bangladesh","noida",201310};
//   struct student1 s1={"bangal",34343,2323266823,"pias","india","delhi",00000};
  
//   printf("Id:%d\n",s.id);
//   printf("city:%s\n",s.name);
//   printf("address:%s\n",s.address);
//   printf("city:%s\n",s.add.city);
//   printf("pin:%d",s.add.pin);
  
//   printf("id for s1:%i \n",s1.id);
//   printf("name for s1:%i \n",s1.name);
//   printf("adress for s1:%i \n",s1.address);
//   printf("city for s1:%i \n",s1.add.city);
//   printf("city for s1:%i \n",s1.add.pin);
  
//   return 0;
  
// }



   
#include<stdio.h>

struct student{
   int id;
   char name[20];
   int sem;
   char sec;
   char group[5];
   char city[15];
   long phone;
   
};

int main(){
    
    struct student s[2];
    
    for(int i=0 ; i<2 ; i++){
        
        
        printf("Enter student system id:");
        scanf("%d",&s[i].id);
        
   
        printf("Enter student name:\n");
        scanf("%s",s[i].name);
        
        
        printf("Enter student sem:\n");
        scanf("%d",&s[i].sem);
        
        printf("Enter student group:\n");
        scanf("%s",s[i].group);
        
        printf("Enter student city:\n");
        scanf("%s",s[i].city);
        
        printf("Enter student sec:\n");
        scanf("%s",s[i].sec);
        
      
       
        
        printf("Enter student phone no:\n");
        scanf("%ld",&s[i].phone);
        
    }
        
        for(int i = 0; i<2 ; i++){
            
            printf("s.no:%d",i+1);
            printf("system id:%d\n",s[i].id);
            printf("name:%s\n",s[i].name);
            printf("section:%c\n",s[i].sec);
            printf("group:%s\n",s[i].group);
            printf("city:%s\n",s[i].city);
            printf("phone:%ld \n\n",s[i].phone);
            
        }
        
        return 0;
        
      



        
    }
