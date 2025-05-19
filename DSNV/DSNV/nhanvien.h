#pragma once
#include<iostream>
using namespace std;
class nhanvien{
protected:
	string ten;
	string ngaysinh;
	long long luongcoban;
public:
	nhanvien();
	~nhanvien();
	virtual long long tinhluong() = 0;
	virtual void nhap();
	virtual void xuat()const;
};