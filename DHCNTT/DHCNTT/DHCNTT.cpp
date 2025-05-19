#include<iostream>
#include"DHCNTT.h"
#include"sinhvienCD.h"
#include"sinhvienDH.h"
using namespace std;
Dhcntt::Dhcntt(){
	slsv = 0;
	dssv = NULL;
}
Dhcntt::~Dhcntt() {
	if (dssv != NULL) {
		delete[] dssv;
	}
}
void Dhcntt::nhap() {
	cout << "\nNhap so luong sinh vien: ";
	cin >> slsv;
	this->dssv = new sinhvien * [slsv];
	for (int i = 0; i < slsv; i++) {
		int loai;
		do {
			cout << "\nNhap lua chon sinh vien (1-sinhvienDH, 2-sinhvienCD): ";
			cin >> loai;
			if (loai <= 0 && loai > 2) {
				cout << "\nNhap lai!";
			}
		} while (loai <= 0 && loai > 2);
		switch (loai) {
		case 1:
		{
			dssv[i] = new sinhvienDH;
			break;
		}
		case 2:
		{
			dssv[i] = new sinhvienCD;
			break;
		}
		}
		dssv[i]->nhap();
	}
}
void Dhcntt::xuat()const {
	cout << "\nXuat danh sach.";
	int count = 0;
	for (int i = 0; i < slsv; i++) {
		this->dssv[i]->xuat();
		count += dssv[i]->SosvTN();
	}
	cout << "\nTong so sinh vien du dieu kien tot nghiep: " << count;
}
void Dhcntt::Xuatsvcaodiemnhat() {
	float max;
	for (int i = 0; i < slsv; i++) {
			max = dssv[0]->getdtb();
			if (dssv[i]->getdtb() > max) {
				max = dssv[i]->getdtb();
		}
	}
	for (int i = 0; i < slsv; i++) {
		if (dssv[i]->getdtb() == max)
			dssv[i]->xuat();
	}
}