#include"CuaHang.h"
#include<iostream>
using namespace std;
void CuaHang::nhap() {
	cout << "\nNhap so luong don hang: ";
	cin >> this->soluonghoadon;
	this->list = new HoaDon;
	for (int i = 0; i < this->soluonghoadon; i++) {
		this->list[i].nhap();
	}
}
void CuaHang::xuat() {
	cout << "\nSo luong hoa don: " << this->soluonghoadon;
	for (int i = 0; i < this->soluonghoadon; i++) {
		this->list[i].xaut();
	}
}