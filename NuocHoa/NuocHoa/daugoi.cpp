#include<iostream>
#include"daugoi.h"
#include<string>
using namespace std;
void daugoi::nhap() {
	cin.ignore();
	cout << "\nNhap ma so: ";
	getline(cin,this->maso);
	cout << "\nNhap dung tich: ";
	cin >> this->dungtich;
}
void daugoi::xuat() {
	cout << "\nMa so: " << this->maso;
	cout << "\nLoai: " << this->loai;
	cout << "\nDung tich:" << this->dungtich;
}
int daugoi::tinhtien() {
	return this->dungtich * this->donGia;
}
void daugoidau::nhap() {
	daugoi::nhap();
	cout << "\nNhap tieu chuan: ";
	cin >> this->tieuchuan;
}
void daugoidau::xuat() {
	daugoi::xuat();
	cout << "\nDon gia: " << this->donGia;
	cout << "\nTieu chuan: " << this->tieuchuan;
}