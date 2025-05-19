#pragma once
#include<iostream>
#include"sinhvien.h"
using namespace std;
class sinhvienCD : public sinhvien {
private:
	float diemthiTN;
public:
	sinhvienCD();
	~sinhvienCD();
	virtual void nhap();
	virtual void xuat()const;
	float getDTTN();
	virtual int SosvTN();
};