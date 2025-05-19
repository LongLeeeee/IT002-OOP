#pragma once
#include"nhanvien.h"
#include<iostream>
using namespace std;
class nvql :public nhanvien {
protected:
	int hscv;
	long thuong;
public:
	nvql();
	~nvql();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};