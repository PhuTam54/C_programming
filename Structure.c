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
	int i;
	struct student stu[5];
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
	for (int i = 0; i <5 ; i++){
		printf("Nhap ten sinh vien %d: ", i+1);
		fflush(stdin);
		gets(stu[i].name); //stu1000.name == Ten sv thu 1000
		printf("Nhap tuoi sinh vien %d: ", i+1);
		scanf("%d", &stu[i].age);
		printf("Nhap mobile sinh vien %d: ", i+1);
		scanf("%llu", &stu[i].mobile);
	}
	for (int i = 0; i < 5 ; i++){
		printf("\nThong tin sinh vien %d su dung bien struct.", i+1);
		printf("\nTen sinh vien %d: %s ",i+1, stu[i].name);
		//puts(stu[i].name);
		printf("\nTuoi sinh vien %d: %d", i+1, stu[i].age);
		printf("\nMobile sinh vien %d: %d\n", i+1, stu[i].mobile);
}
	//find student by mobile 
	int mobileFind;
	printf("\nNhap Sdt cua sinh vien ban muon tim: ");
	scanf("%d", &mobileFind);
	for (int i = 0; i < 5 ; i++){
		if (stu[i].mobile == mobileFind){
			printf("Da tim thay sinh vien %s", stu[i].name);
		}
	}
	return 0;
}