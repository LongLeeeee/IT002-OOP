#include<iostream>
#include"goiSP.h"
void goiSP::nhap() {
	cout << "\nNhap ma goi: ";
	cin >> this->magoi;
}
void goiSP::xuat(){
	cout << "\nMa goi: " << this->magoi;
	cout << "\nTen san pham: " << this->tenSP;
	cout << "\n1. Nuoc hoa:";
	this->nh->xuat();
	cout << "\n2.Sua tam:";
	this->st->xuat();
	cout << "\nDau goi:";
	this->dg->xuat();
	cout << "\nTong gia tien cua goi hang: ";
	cout << this->giatonggoi;
}
int goiSP::tinhtiengoi() {
	this->giatonggoi = this->dg->tinhtien() + this->nh->tinhTien() + this->st->tinhtien();
	return this->giatonggoi;
}
void goiRoman::nhap() {
	goiSP::nhap();
	cout << "\nNhap thong tin nuoc hoa hoa hong.";
	this->nh->nhap();
	cout << "\nChon loai sua tam (1-Danh cho da kho, 2-Danh cho da nhon): ";
	int luachon;
	cin >> luachon;
	if (luachon == 1) {
		this->st = new suatamdakho;
	}
	else if (luachon == 2) {
		this->st = new suatamdanhon;
	}
	this->st->nhap();
	cout << "\nChon loai dau goi (1-Dau goi toc kho, 2-Dau goi toc dau): ";
	int lc;
	cin >> lc;
	if (lc == 1) {
		this->dg = new daugoikho;
	}
	else if (lc == 2) {
		this->dg = new daugoidau;
	}
	this->dg->nhap();
}
void goiFresh::nhap() {
	goiSP::nhap();
	cout << "\nNhap thong tin dau goi toc kho.";
	this->dg->nhap();
	cout << "\nChon loai sua tam (1-Danh cho da kho, 2-Danh cho da nhon): ";
	int luachon;
	cin >> luachon;
	if (luachon == 1) {
		this->st = new suatamdakho;
	}
	else if (luachon == 2) {
		this->st = new suatamdanhon;
	}
	this->st->nhap();
	cout << "\n Chon loai nuoc hoa (1-Hoa cuc, 2-Hoa hong): ";
	int lc;
	cin >> lc;
	if (lc == 1) {
		this->nh = new nuocHoaCuc;
	}
	else if (lc == 2) {
		this->nh = new nuocHoaHong;
	}
	this->nh->nhap();
}
