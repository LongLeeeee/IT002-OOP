#include<iostream>
#include"CongVien.h"
#include"Vevaocong.h"
#include"Vetungphan.h"
#include"Vetrongoi.h"
using namespace std;
CongVien::CongVien() {
	this->dsve = NULL;
	this->soluongve = 0;
}
CongVien::~CongVien() {
	if (this->dsve != NULL) {
		delete[]dsve;
	}
}
void CongVien::nhap() {
	cout << "Nhap so luong ve: ";
	cin >> this->soluongve;
	this->dsve = new Vevaocong*[this->soluongve];
	for (int i = 0; i < soluongve; i++) {
		int loai;
		cout << "\nNhap loai ve (0 - Ve tung phan, 1 - Ve tron goi): ";
		do {
			cin >> loai;
			if ((loai < 0) && (loai > 1)) {
				cout << "\nNhap sai loai ve. Hay nhap lai!";
			}
		} while ((loai < 0) && (loai > 1));
		if (loai == 0) {
			dsve[i] = new Vetungphan;
			this->Demsove++;
		}
		if (loai == 1) {
			dsve[i] = new Vetrongoi;
		}
		dsve[i]->nhap();
	}
}
void CongVien::xuat()const{
	cout << "\n===== Xuat Danh Sach =====";
	for (int i = 0; i < soluongve; i++) {
		this->dsve[i]->xuat();
	}
}
long long CongVien::Tinhtongtienve() {
	long long tongtienve = 0;
	for (int i = 0; i < soluongve; i++) {
		tongtienve = tongtienve + dsve[i]->tinhtongtienve();
	}
	cout << "\nTong tien ve cua cong vien: " << tongtienve;
	return 0;
}
int CongVien::Sovetungphanbanduoc() {
	cout << "\nSo ve tung phan duoc ban: " << this->Demsove;
	return 0;
}
