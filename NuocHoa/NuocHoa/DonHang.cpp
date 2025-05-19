#include<iostream>
#include"DonHang.h"
#include<string>
using namespace std;
void donHang::nhap() {
	cin.ignore();
	cout << "\nNhap ma don hang:";
	getline(cin,maDH);
	cout << "\nNhap ngay lap hoa don: ";
	getline(cin, this->ngaylapdon);
	cout << "\nThong tin khach hang. ";
	this->TTkhachHang.nhap();
	int lc;
	cout << "\nChon goi san pham ma ban muon chon (1-goi Romantic, 2-goi Fresh-Air): ";
	do {
		cin >> lc;
		if (lc < 0 && lc >2) {
			cout << "\nNhap sai thong tin. Xin nhap lai!";
		}
	} while (lc < 0 && lc >2);
	if (lc == 1) {
		this->TTgoiSP = new goiRoman;
	}
	else if (lc == 2) {
		this->TTgoiSP = new goiFresh;
	}
	this->TTgoiSP->nhap();

}
void donHang::xuat()
{
	cout << "\nMa don hang: " << this->maDH;
	cout << "\nThong tin khach hang: ";
	this->TTkhachHang.xuat();
	cout << "\nNgay lap hoa don: " << this->ngaylapdon;
	cout << "\nGia don hang: " << this->TTgoiSP->tinhtiengoi();
	cout << "\nThong tin goi san pham: ";
	this->TTgoiSP->xuat();
}