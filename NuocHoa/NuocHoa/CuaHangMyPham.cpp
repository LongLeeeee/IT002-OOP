#include<iostream>
#include"CuaHangMyPham.h"
using namespace std;
void CHMyPham::nhap() {
	cout << "\nNhap so luong san pham: ";
	cin >> this->sldonhang;
	this->list = new donHang;
	for (int i = 0; i < this->sldonhang; i++) {
		list[i].nhap();
	}
}
void CHMyPham::xuat() {
	cout << "\nSo luong don hang: " << this->sldonhang;
	for (int i = 0; i < this->sldonhang; i++) {
		list[i].xuat();
	}
}