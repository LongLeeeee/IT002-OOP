#pragma once
#include"Vevaocong.h"
#include<vector>
using namespace std;
class CongVien {
private:
	Vevaocong** dsve;
	int soluongve;
	int Demsove = 0;
public:
	CongVien();
	~CongVien();
	void nhap();
	void xuat()const;
	long long Tinhtongtienve();
	int Sovetungphanbanduoc();
};