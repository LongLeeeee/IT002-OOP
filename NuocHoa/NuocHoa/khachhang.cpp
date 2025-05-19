#include<iostream>
#include"khachhang.h"
#include<string>
using namespace std;
void khachHang::nhap() {
	cout << "\nNhap ma khach hang: ";
	getline(cin, this->maKH);
	cout << "\nNhap ten khach hang: ";
	getline(cin, this->ten);
	cout << "\nNhap dia chi: ";
	getline(cin, this->diachi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, this->sdt);
}
void khachHang::xuat() {
	cout << "\nMa khach hang: " << this->maKH;
	cout << "\nTen khach hang: " << this->ten;
	cout << "\nDia chi: " << this->diachi;
	cout << "\nSo dien thoai: " << this->sdt;
}