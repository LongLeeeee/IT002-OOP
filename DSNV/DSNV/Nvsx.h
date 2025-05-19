#pragma once
#include"nhanvien.h"
#include<iostream>
using namespace std;
class nvsx : public nhanvien {
protected:
	long sp;
public:
	nvsx();
	~nvsx();
	virtual long long tinhluong();
	virtual void nhap();
	virtual void xuat()const;
};