#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
	char name[40];
	int id;
	float toan;
	float ly;
	float hoa;
	float avg;
};
	
	struct student *st;
	float calcAvg(struct student *st, int n);
	void getInfo(struct student *st, int n);
	void showInfo(struct student *st, int n);
	void findByMaxAvg(struct student *st, int n);
	void sortByAvg(struct student *st, int n);
	void findById(struct student *st, int n);
	void findByName(struct student *st, int n);

int main()
{
	int n;
	printf("Nhap so sinh vien ban muon: ");
	scanf("%d", &n);
	st = (struct student*)malloc(n*sizeof(struct student));
	getInfo(st, n);		  //1.Xác định số lượng sinh viên cần nhập (Khởi tạo sv)
	showInfo(st, n);
	findByMaxAvg(st, n);  //2.Tìm sv có số điểm tb cao nhất
	sortByAvg(st, n);     //3.Sắp xếp sv theo thứ tự tăng dần của điểm TB
    findById(st, n);      //4.Tìm sv theo ID
	findByName(st, n);    //5.Tìm sv theo tên của sv
	
	return 0;
}
void getInfo(struct student *st, int n)
{
	for (int i = 0; i <n ; i++){
		printf("\nNhap TEN sinh vien %d: ", i+1);
		fflush(stdin);
		gets((st+i)->name);
		printf("Nhap ID sinh vien %d: ", i+1);
		scanf("%d", &(st+i)->id);
		printf("Nhap diem TOAN sinh vien %d: ", i+1);
		scanf("%f", &(st+i)->toan);
		printf("Nhap diem LY sinh vien %d: ", i+1);
		scanf("%f", &(st+i)->ly);
		printf("Nhap diem HOA sinh vien %d: ", i+1);
		scanf("%f", &(st+i)->hoa);
		(st+i)->avg =  calcAvg(st, n);	
	}	
}                               

float calcAvg(struct student *st, int n)
{
	for (int i = 0; i < n; i ++){	
		(st+i)->avg = (((st+i)->toan) + ((st+i)->ly) + ((st+i)->hoa))/3;
		}                                                                                                                            
	}

void showInfo(struct student *st, int n)
{
	printf("\n\tSTUDENT INFORMATION\n---------------------------------------");
	for (int i = 0; i < n; i ++){                                                            
		printf("\nThe %d student's information: ", i+1);
		printf("\nTEN sinh vien %d: %s ",i+1, (st+i)->name);
		printf("\nID sinh vien %d: %d", i+1, (st+i)->id);
		printf("\nDiem TOAN sinh vien %d: %.2f", i+1, (st+i)->toan);
		printf("\nDiem LY sinh vien %d: %.2f", i+1, (st+i)->ly);
		printf("\nDiem HOA sinh vien %d: %.2f", i+1, (st+i)->hoa);
		printf("\nDiem TRUNG BINH sinh vien %d: %.2f\n", i+1, (st+i)->avg);
	}
}

void sortByAvg(struct student *st, int n)
{
	int temp;    //bubble sort
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <n-i-1; j++)
		{
			if (((st+j)->avg) > ((st+j+1)->avg))
			{
			temp = ((st+j)->avg);
			((st+j)->avg) = ((st+j+1)->avg);
			((st+j+1)->avg) = temp;
			}
		}
	}
}	

void findByMaxAvg(struct student *st, int n)
{
	float max = 0;
	for (int i = 0; i < n; i ++){
		if (((st+i)->avg) > max){
			max = ((st+i)->avg);
		}
	}
	for (int i = 0; i < n; i ++){
		if (max == (st+i)->avg){
			printf("\nHoc sinh co so diem trung binh cao nhat la: %s voi %.2f diem.", (st+i)->name, (st+i)->avg);
		}
	}		
}

void findById(struct student *st, int n)
{
	int idToFind;
	printf("\n\nNhap Id cua sinh vien ban muon tim: ");
	scanf("%d", &idToFind);
	for (int i = 0; i < n; i ++){
		if (idToFind == (st+i)->id){
			printf("\nHoc sinh co ID %d la: %s.",(st+i)->id , (st+i)->name);
			continue;
		}
	}
}	

void findByName(struct student *st, int n)
{
	char nameToFind[40];
	printf("\n\nNhap ten hoc sinh ban muon tim: ");
	fflush(stdin);
	gets(nameToFind);
	for (int i = 0; i < n; i ++){
		if(strcmp((st+i)->name,nameToFind) == 0){
			printf("\nDa tim thay sinh vien: %s ID %d", (st+i)->name, (st+i)->id);
			continue;
		}
	}
}