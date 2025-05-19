#pragma once
#include<string>
using namespace std;
class suatam {
protected:
	string maso;
	string loai;
	int dungtich;
	int donGia;
public:
	virtual void nhap();
	virtual void xuat();
	virtual int tinhtien();
};
class suatamdanhon : public suatam {
public:
	suatamdanhon() {
		this->donGia = 40;
		this->loai = "Sua tam da nhon";
	}
};
class suatamdakho : public suatam {
public:
	suatamdakho() {
		this->donGia = 20;
		this->loai = "Sua tam da kho";
	}
};