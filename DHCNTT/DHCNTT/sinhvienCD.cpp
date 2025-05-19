#include<iostream>
#include"sinhvienCD.h"
using namespace std;
sinhvienCD::sinhvienCD() {
	this->diemthiTN = 0;
}
void sinhvienCD::nhap() {
	sinhvien::nhap();
	cout << "\nNhap diem thi tot nghiep: ";
	cin >> this->diemthiTN;
}
void sinhvienCD::xuat()const {
	sinhvien::xuat();
	cout << "\nDiem thi tot nghiep: " << diemthiTN;
}
sinhvienCD::~sinhvienCD() {
}
float sinhvienCD::getDTTN() {
	return diemthiTN;
}
int sinhvienCD::SosvTN() {
	int count = 0;
	if (diemthiTN >= 5 && gettongsotc() >= 120 && getdtb() >= 5) {
		count++;
	}
	return count;
}