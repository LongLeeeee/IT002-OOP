#include<iostream>
#include"ThietBiDienTu.h"
using namespace std;
void ThietBiDienTu::nhap() {
	cin.ignore();
	cout << "\nNhap ma san pham: ";
	getline(cin, this->maSP);
	cout << "\nNhap noi san xuat: ";
	getline(cin, this->noiSX);
}
void ThietBiDienTu::xuat()const {
	cout << "\nMa san pham: " << this->maSP;
	cout << "\nTen san pham: " << this->tenSP;
	cout << "\nGia: " << this->gia;
	cout << "\nNoi san xuat: "<<this->noiSX;
}
int ThietBiDienTu::getGiaTien() {
	return this->gia;
}