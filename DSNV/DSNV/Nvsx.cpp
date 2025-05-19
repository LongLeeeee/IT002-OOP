#include<iostream>
#include"Nvsx.h"
using namespace std;
long long nvsx::tinhluong() {
	return luongcoban + sp * 2000;
}
void nvsx::nhap() {
	nhanvien::nhap();
	cout << "\nNhap so san pham: ";
	cin >> sp;
}
void nvsx::xuat()const {
	nhanvien::xuat();
	cout << "\nSo san pham: ";
}
nvsx::nvsx() {
	sp = 0;
}
nvsx::~nvsx() {
}
