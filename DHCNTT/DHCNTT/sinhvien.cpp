#include<iostream>
#include"sinhvien.h"
#include<string>
using namespace std;
sinhvien::sinhvien() {
	this->mssv = 0;
	this->hoten = "***";
	this->diachi = "***";
	this->dtb = 0;
	this->tongsotc = 0;
}
void sinhvien::nhap() {
	cout << "Nhap mssv: ";
	cin >> this->mssv;
	cin.ignore();
	cout << "\nNhap ho va ten: ";
	getline(cin, this->hoten);
	cout << "\nNhap dia chi: ";
	getline(cin, this->diachi);
	cout << "\nNhap dtb: ";
	cin >> this->dtb;
	cout << "\nNhap tong so tin chi: ";
	cin >> this->tongsotc;
}
void sinhvien::xuat() const{
	cout << "\nMssv: " << mssv;
	cout << "\nHo va ten: " << hoten;
	cout << "\nDia chi: " << diachi;
	cout << "\nDiem trung binh: " << dtb;
	cout << "\nTong so tin chi: " << tongsotc;
}
sinhvien::~sinhvien() {
}
int sinhvien::gettongsotc() {
	return tongsotc;
}
float sinhvien::getdtb() {
	return dtb;
}
