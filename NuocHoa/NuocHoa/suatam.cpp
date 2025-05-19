#include<iostream>
#include"suatam.h"
#include<string>
using namespace std;
void suatam::nhap() {
	cout << "Nhap ma so: ";
	cin.ignore();
	getline(cin, this->maso);;
	cout << "\nNhap dung tich: ";
	cin >> this->dungtich;
}
void suatam::xuat() {
	cout << "\nMa so: " << this->maso;
	cout << "\nLoai: " << this->loai;
	cout << "\nDung tich: " << this->dungtich;
	cout << "\nDon gia: " << this->donGia;
}
int suatam::tinhtien() {
	return this->dungtich * this->donGia;
}