#include<iostream>

struct Con_nguoi
{
	Con_nguoi(int age, float v1, float high)
	{
		tuoi = age;
		vong_1 = v1;
		chieu_cao = high;	
	}
	int tuoi;
	float vong_1, chieu_cao;
};

int main()
{
	Con_nguoi thao(18, 90, 1.65);
	Con_nguoi lan(19, 95, 1.7);
	Con_nguoi huong(22, 80, 1.6);
	
	Con_nguoi *bo_nhi = nullptr;
	//thu2
	bo_nhi = &thao;
	thao.tuoi = 23;
	std::cout << (*bo_nhi).tuoi << std::endl;
	
	//thu3
	bo_nhi = &lan;
	std::cout << (*bo_nhi).vong_1 << std::endl;

/*	//thu4
	bo_nhi = nullptr;
	std::cout << (*bo_nhi).vong_1 << std::endl;
*/
	//thu5
	bo_nhi = &huong;
	std::cout << (*bo_nhi).chieu_cao << std::endl;
	
	return 0;
}
