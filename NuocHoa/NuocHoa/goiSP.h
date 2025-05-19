#pragma once
#include<string>
#include"daugoi.h"
#include"nuocHoa.h"
#include"suatam.h"
class goiSP {
protected:
	string magoi;
	int loaiSP;
	nuocHoa *nh;
	suatam *st;
	daugoi *dg;
	int giatonggoi;
	string tenSP;
public:
	virtual void nhap();
	virtual void xuat();
	virtual int tinhtiengoi();
};
class goiRoman :public goiSP {
public:
	goiRoman() {
		this->nh = new nuocHoaHong;
		this->loaiSP = 1;
		this->tenSP = "Romantic";
	}
	virtual void nhap();
};
class goiFresh : public goiSP {
public:
	goiFresh() {
		this->dg = new daugoikho;
		this->loaiSP = 2;
		this->tenSP = "Fresh-Air";
	}
	virtual void nhap();
};