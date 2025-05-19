#include<iostream>
#include"KhachHang.h"
using namespace std;
void KhachHang::nhap() {
	cout << "\nNhap ma so khach hang: ";
	cin.ignore();
	getline(cin, this->maKH);
	cout << "\nNhap ten: ";
	getline(cin, this->ten);
	cout << "\nNhap so dien thoai: ";
	getline(cin, this->SDT);
	cout << "\nNhap dia chi: ";
	getline(cin, this->diachi);
}
void KhachHang::xuat() {
	cout << "\nMa so khach hang: " << this->maKH;
	cout << "\nTen: " << this->ten;
	cout << "\nSo dien thoai: " << this->SDT;
	cout << "\nDia chi: " << this->diachi;
}