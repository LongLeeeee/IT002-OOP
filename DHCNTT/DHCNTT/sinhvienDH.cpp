#include<iostream>
#include"sinhvienDH.h"
#include<string>
sinhvienDH::sinhvienDH() {
	this->diemlv = 0;
	this->tenlv = "***";
}
void sinhvienDH::nhap() {
	sinhvien::nhap();
	cout << "\nNhap ten luan van: ";
	cin.ignore();
	getline(cin, tenlv);
	cout << "\nNhap diem luan van: ";
	cin >> diemlv;
}
void sinhvienDH::xuat()const {
	sinhvien::xuat();
	cout << "\nTen luan van: " << tenlv;
	cout << "\nDiem luan van: " << diemlv;
}
sinhvienDH::~sinhvienDH() {
}
float sinhvienDH::getdiemlv() {
	return diemlv;
}
int sinhvienDH::SosvTN() {
	int count = 0;
	if (gettongsotc() >= 170 && getdtb() >= 5 && diemlv >= 5) {
		count++;
	}
	return count;
}
