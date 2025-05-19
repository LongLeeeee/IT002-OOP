#pragma once
#include <string>   
using namespace std;
class ThietBiDienTu {
protected:
	string maSP;
	string tenSP;
	int gia;
	string noiSX;
public:
	virtual void nhap();
	virtual void xuat()const;
	int getGiaTien();
};