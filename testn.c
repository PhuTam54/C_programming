#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Khai bao ben ngoai cac ham == Global variable
struct student{
	char name[40];
	int id;
	float toan;                             //strcpy(s1, s2) => s2 (Gán s2 sang s1 - hiển thị s1)
	float ly;      
	float hoa; 	
	float ave;
};
	struct student *student;

int main(){
//1.Xác định số lượng sinh viên cần nhập (Khởi tạo sv)
	int n, i, j;
	printf("Nhap so sinh vien ban muon: ");
	scanf("%d", &n);
	student = (struct student*)malloc(n*sizeof(struct student));
	get_info(n);
	print_info(student, n);
	//print_info(student[i].name,student[i].id,student[i].toan,student[i].ly,student[i].hoa,student[i].ave);
	cacl_ave_score(student[i].toan, student[i].ly, student[i].hoa, &student[i].ave);	
/*
//3.Sắp xếp sv theo thứ tự tăng dần của điểm TB
//bubble sort
int temp;
	for (i = 0; i < 6; i++){
		for (j = 0; j <6-i-1; j++){
		if (student[j] > student[j+1]){
			temp = student[j];
			student[j]= student[j+1];
			student[j +1] = temp;
		}
	}
	}
//Display elements
printf("Sorted array:\n");
for(i = 0;i<n;i++)
{
printf("%d\t", *(ary + i)); //printf("%d", ary[i]);
}
//2.Tìm sv có số điểm tb cao nhất
	//for (int i = 0; i < n; i ++){
		
	
*/	
	return 0;
}
void get_info(int n){
	for (int i = 0; i <n ; i++){
		printf("\nNhap TEN sinh vien %d: ", i+1);
		fflush(stdin);
		gets(student[i].name); //stu1000.name == Ten sv thu 1000
		printf("Nhap ID sinh vien %d: ", i+1);
		scanf("%d", &(student+i)->id);
		printf("Nhap diem TOAN sinh vien %d: ", i+1);
		scanf("%f", &(student+i)->toan);
		printf("Nhap diem LY sinh vien %d: ", i+1);
		scanf("%f", &(student+i)->ly);
		printf("Nhap diem HOA sinh vien %d: ", i+1);
		scanf("%f", &(student+i)->hoa);}	
		cacl_ave_score((student+i)->toan, (student+i)->ly, (student+i)->hoa, n);
}

void print_info(struct student *student, int n){
	for (int i = 0; i < n ; i++){
		printf("\nThe %d student's information: ", i+1);
		printf("\nTEN sinh vien %d: %s ",i+1, (student+i)->name);
		printf("\nID sinh vien %d: %d", i+1, (student+i)->id);
		printf("\nDiem TOAN sinh vien %d: %.1f", i+1, (student+i)->toan);
		printf("\nDiem LY sinh vien %d: %.1f", i+1, (student+i)->ly);
		printf("\nDiem HOA sinh vien %d: %.1f", i+1, (student+i)->hoa);
		printf("\nDIEM TRUNG BINH sinh vien %d: %.2f\n", i+1, (student+i)->ave);
}
}
float cacl_ave_score(struct student *student, int n){
	for (int i = 0; i < n; i++){
		(student+i)->ave = ((student+i)->toan + (student+i)->ly + (student+i)->hoa)/ 3;
	return (student+i)->ave;
	}
}
//Note: sử dụng function cho mỗi chức năng ^.^

/*
1.Xác định số lượng sinh viên cần nhập (Khởi tạo sv)
2.Tìm sv có số điểm tb cao nhất 
3.Sắp xếp sv theo thứ tự tăng dần của điểm TB
4.Tìm sv theo ID
5.Tìm sv theo tên của sv (string: strcmp(s1, s2) => 0 nếu s1 = s2) (s1-s2=0)
*/