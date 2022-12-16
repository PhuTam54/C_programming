#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Khai bao ben ngoai cac ham == Global variable
struct student{
	char ten_sv[40];
	int ma_sv;
	float toan;                             //strcpy(s1, s2) => s2 (Gán s2 sang s1 - hiển thị s1)
	float ly; 
	float hoa; 	
	float diem_trung_binh;
};
//Note: sử dụng function cho mỗi chức năng ^.^

/*
1.Xác định số lượng sinh viên cần nhập (Khởi tạo sv)
2.Tìm sv có số điểm tb cao nhất 
3.Sắp xếp sv theo thứ tự tăng dần của điểm TB
4.Tìm sv theo ID
5.Tìm sv theo tên của sv (string: strcmp(s1, s2) => 0 nếu s1 = s2) (s1-s2=0)

*/
	return 0;
}