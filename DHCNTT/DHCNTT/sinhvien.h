#pragma once
#include<iostream>
using namespace std;
class sinhvien {
private:
	long long mssv;
	string hoten;
	string diachi;
	float dtb;
	int tongsotc;
public: 
	sinhvien();
	~sinhvien();
	virtual void nhap();
	virtual void xuat()const;
	float getdtb();
	int gettongsotc();
	virtual int SosvTN() = 0;
};