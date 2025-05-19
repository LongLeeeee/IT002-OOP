#include<iostream>
#include"MayLanh.h"
using namespace std;
MayLanh1Chieu::MayLanh1Chieu(bool check) {
	this->tenSP = "May lanh 1 chieu.";
	this->gia = 1000;
	if (check == true) {
		this->gia += 500;
		this->CNInverter = true;
	}
}
void MayLanh1Chieu::xuat()const {
	ThietBiDienTu::xuat();
	cout << "\nCong nghe Inverter: " << this->CNInverter;
}
MayLanh2Chieu::MayLanh2Chieu(bool check1, bool check2, bool check3) {
	this->tenSP = "May lanh 2 chieu.";
	this->gia = 2000;
	if (check1 == 1) {
		this->gia += 500;
		this->CNInverter = true;
	}
	if (check2 == true) {
		this->gia += 500;
		this->CNKhuKhuan = true;
	}
	if (check3 == true) {
		this->gia += 500;
		this->CNKhuMui = true;
	}
}
void MayLanh2Chieu::xuat()const {
	ThietBiDienTu::xuat();
	cout << "\nCong nghe Inverter: " << this->CNInverter;
	cout << "\nCong nghe khu khuan: " << this->CNKhuKhuan;
	cout << "\nCong nghe khu mui: " << this->CNKhuMui;
}