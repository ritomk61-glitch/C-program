#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[144];
    int age;
    int mark;
};

int main(){
    FILE *f1;
    struct student s1;
     
    f1 = fopen("studentf.dat","w");

    if(f1 == NULL){
        printf("we facing some error");
        exit(1);
    }

    for(int i = 0 ; i<=1 ; i++){
        printf("enter student name:");
        scanf("%s",s1.name);
        printf("enter student age:");
        scanf("%d",&s1.age);
        printf("enter student marks:");
        scanf("%d",&s1.mark);
        fprintf(f1,"name:%s \n age:%d \n marks:%d \n\n\n",s1.name,s1.age,s1.mark);
    }


    fclose(f1);
    return 0;
}