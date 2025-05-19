#pragma once
#include<string>
#include"khachhang.h"
#include"goiSP.h"
using namespace std;
class donHang {
private:
	string maDH;
	khachHang TTkhachHang;
	string ngaylapdon;
	int giaDonhang;
	goiSP* TTgoiSP;
public:
	void nhap();
	void xuat();
};