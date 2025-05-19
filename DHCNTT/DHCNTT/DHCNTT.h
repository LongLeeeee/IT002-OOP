#pragma once
#include<iostream>
#include "sinhvien.h"
class Dhcntt {
private:
	sinhvien** dssv;
	int slsv;
public:
	Dhcntt();
	~Dhcntt();
	void nhap();
	void xuat()const;
	void Xuatsvcaodiemnhat();
};