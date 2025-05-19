#pragma once
#include"nhanvien.h"
#include<iostream>
using namespace std;
class nvvp :public nhanvien {
protected:
	long trocap;
	int snlv;
public:
	nvvp();
	~nvvp();
	int getslnvvp();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};