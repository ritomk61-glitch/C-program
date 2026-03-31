#include<stdio.h>
struct student{
    char name[34];
    int age;
    int mark;
    
};
int main(){

    struct student s3={"priya",33,787};
  
   printf("%d %d %s",s3.age,s3.mark,s3.name);
   return 0;

}

// ?Nested struct

#include<stdio.h>
#include<string.h>
struct adress {
    char city[20];
    int pin;
};
struct student {
    char name[10];
    int roll;
    int dept;

    struct adress bari;
};

int main(){
    struct student s1;
    strcpy(s1.bari.city,"bangladesh");
    
    s1.bari.pin=643478;
   printf("%s %d",s1.bari.city , s1.bari.pin);
   return 0;
}


  