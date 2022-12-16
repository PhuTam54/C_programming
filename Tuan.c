//Search by name
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student //ten cau truc
{
    int id;
    char name[50];
    float marks;
};
struct student *st;

int main(){
    int i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    //cap phat bo nho dong cho struct
    st = (struct student*)malloc(n*sizeof(struct student));
   
    for(i =0; i< n; i++){
        //input information
        printf("\nEnter student information ");
        printf("\n--------------------------");
        printf("\nStudent id: ");
        scanf("%d",&(st+i)->id);//scanf("%d",&st[i].id);
        fflush(stdin);
        printf("\nStudent name:");
        scanf("%s",&(st+i)->name);
       
        printf("\nStudent Marks: ");
        scanf("%f",&(st+i)->marks);
    }
//    searchStudentById(st,n);
    searchStudentByName(st,n);
   
   
    //displayStudent(st,n);
}
void displayStudent(struct student *st, int n){
    int i;
    for(i=0; i<n; i++){
        printf("\nId: %d, name: %s, Marks: %f",(st+i)->id, (st+i)->name, (st+i)->marks );
    }
   
}
void searchStudentById(struct student *st, int n){
   
    int search;
    int i;
    printf("\nNhap id sv can tim: ");
    scanf("%d",&search);
   
    for(i=0; i<n; i++){
        if((st+i)->id==search){
            printf("\nId: %d, name: %s, Marks: %f",(st+i)->id, (st+i)->name, (st+i)->marks );
        }
       
    }
}
void searchStudentByName(struct student *st, int n){
    char search[50];
    int i;
    printf("\nNhap ten sv can tim: ");
    fflush(stdin);
    scanf("%s",search);
    for(i=0; i<n; i++){
        if(strcmp((st+i)->name,search)==0){//strcmp(s1,s2)==0 neu s1==s2
            printf("\nId: %d, name: %s, Marks: %f",(st+i)->id, (st+i)->name, (st+i)->marks );
        }
    }
}