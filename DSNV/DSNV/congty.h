#pragma once
#include<iostream>
#include"nhanvien.h"
using namespace std;
class congty{
protected:
	nhanvien **dsnv;
	int slnv;
public:
	congty();
	~congty();
	void nhap();
	void xuat()const;
	long gettongluong();
};