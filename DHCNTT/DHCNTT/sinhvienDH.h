#pragma once
#include<iostream>
#include"sinhvien.h"
class sinhvienDH : public sinhvien {
private:
	string tenlv;
	float diemlv;
public:
	sinhvienDH();
	~sinhvienDH();
	virtual void nhap();
	virtual void xuat()const;
	float getdiemlv();
	virtual int SosvTN();
};