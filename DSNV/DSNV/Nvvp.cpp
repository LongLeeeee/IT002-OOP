#include<iostream>
#include"Nvvp.h"
using namespace std;
nvvp::nvvp(){
	this->trocap = 0;
	this->snlv = 0;
}
long long nvvp::tinhluong() {
	return luongcoban + snlv * 200000 + trocap;
}
void nvvp::nhap() {
	nhanvien::nhap();
	cout << "\nNhap tro cap: ";
	cin >> trocap;
	cout << "\nSo ngay lam viec: ";
	cin >> snlv;
}
void nvvp::xuat()const {
	nhanvien::xuat();
	cout << "\nTro cap: " << trocap;
	cout << "\nSo ngay lam viec: " << snlv;
}
nvvp::~nvvp() {
}
