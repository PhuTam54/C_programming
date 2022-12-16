#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Khai bao ben ngoai cac ham == Global variable
struct student{
	char name[40];
	int age;
	unsigned long long mobile; //llu
};//stu1, stu2, stu3, stu4, stu5;

int main(){
	//struct student student[100]; //Khai bao 100 bien struct
	struct student *student; //pointer == Mang "cap phat dong"
	student = (struct student*)malloc(sizeof(struct student));
	//Truy xuat(goi, gan) gia tri cho Bien thanh phan
	gets(student->name); //Thay dau . thanh dau ->
	scanf("%d", student ->age);
	scanf("%llu", student->mobile);
	
	printf("%d", student->age);
	
	
/*	
	//struct student stu[1000]; 1000 sinh vien 
	//struct student *stu; Cap phat bo nho dong: malloc...
	
	//Input student 1
	/*printf("Nhap ten sinh vien: ");
	gets(stu1.name); //stu1000.name == Ten sv thu 1000
	printf("Nhap tuoi sinh vien: ");
	scanf("%d", &stu1.age);
	printf("Nhap mobile sinh vien: ");
	scanf("%llu", &stu1.mobile);

	//Output student 1
	/*printf("\nThong tin sinh vien %d su dung bien struct.", i+1);
	printf("\nTen sinh vien: %s", stu[i].name);
	printf("\nTuoi sinh vien: %d", stu[i].age);
	printf("\nMobile sinh vien: %d", stu[i].mobile);
*/
	
	return 0;
}