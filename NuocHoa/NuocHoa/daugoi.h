#pragma once
#include<string>
#include<fstream>
using namespace std;
class daugoi {
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
class daugoikho : public daugoi {
public:
	daugoikho() {
		this->donGia = 20;
		this->loai = "Dau goi kho";
	}
};
class daugoidau : public daugoi {
protected:
	int tieuchuan;
public:
	daugoidau() {
		if (this->tieuchuan == 1) {
			this->donGia = 30;
		}
		else if (this->tieuchuan == 2) {
			this->donGia = 40;
		}
		this->loai = "Dau goi dau";
	}
	void nhap();
	void xuat();
};