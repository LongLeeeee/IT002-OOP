#include<iostream>
#include"Nvql.h"
using namespace std;
long long nvql::tinhluong() {
	return luongcoban * hscv + thuong;
}
void nvql::nhap() {
	nhanvien::nhap();
	cout << "\nHe so cong viec: ";
	cin >> hscv;
	cout << "\nNhap tien thuong: ";
	cin >> thuong;
}
void nvql::xuat()const {
	nhanvien::xuat();
	cout << "\nHe so cong viec: " << hscv;
	cout << "\nTien thuong: " << thuong;
}
nvql::nvql() {
	this->hscv = 0;
	this->thuong = 0;
}
nvql::~nvql() {
}
