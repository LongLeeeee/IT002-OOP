#pragma once
#include<iostream>
using namespace std;
class Vevaocong {
private:
	string mave;
	string hoten;
	int namsinh;
public:
	Vevaocong();
	~Vevaocong();
	virtual void nhap();
	virtual void xuat()const;
	virtual long long tinhtongtienve() = 0;
};