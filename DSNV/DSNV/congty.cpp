#include<iostream>
#include"congty.h"
#include"Nvvp.h"
#include"Nvql.h"
#include"Nvsx.h"
using namespace std;
congty::congty(){
	this->slnv = 0;
	this->dsnv = NULL;
}
void congty::nhap() {
	cout << "\nNhap so luong nhan vien: ";
	cin >> this->slnv;
	this->dsnv = new nhanvien*[this->slnv];
	for (int i = 0; i < slnv; i++) {
		int loai;
		do {
			cout << "\nNhap loai nhan vien (1-VP, 2-SX, 3-QL): ";
			cin >> loai;
			if (loai < 0 && loai > 4) {
				cout << "\n Loai nhan vien khong ton tai.\nVui long nhap lai.";
			}
		} while (loai < 0 && loai > 4);
		switch (loai) {
		case 1:
		{
			dsnv[i] = new nvvp;
			break;
		}
		case 2:
		{
			dsnv[i] = new nvsx;
			break;
		}
		case 3:
		{
			dsnv[i] = new nvql;
			break;
		}
		default:
			cout << "Khong ton tai loai nhan vien nay trong cong ty.";
			break;
		}
		dsnv[i]->nhap();
	}
}
void congty::xuat()const {
	cout << "\nXuat danh sach.";
	int tongluong = 0;
	for (int i = 0; i < this->slnv; i++) {
		this->dsnv[i]->xuat();
		cout << "\nLuong: " << dsnv[i]->tinhluong();
		tongluong += dsnv[i]->tinhluong();
	}
	cout << "\nTong luong can phai tra cho nhan vien cong ty: " << tongluong;
}
congty::~congty() {
	if (this->dsnv != NULL) {
		delete[]dsnv;
	}
}