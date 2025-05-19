#include<iostream>
#include"Vetungphan.h"
using namespace std;
void Vetungphan::nhap() {
	Vevaocong::nhap();
	cout << "\nNhap so tro choi: ";
	do {
		cin >> this->sotrochoi;
		if (this->sotrochoi <= 0 && this->sotrochoi >=31){
			cout << "\nNhap sai so luong tro choi. Hay nhap lai.";
		}
	}while (this->sotrochoi <= 0 && this->sotrochoi >= 31);
}
void Vetungphan::xuat()const {
	Vevaocong::xuat();
	cout << "\nGia tien: " << this->giatien;
	cout << "\nTien tra them cho 1 tro choi: " << this->tientrathem1tro;
	cout << "\nSo tro choi: " << this->sotrochoi;
}
long long Vetungphan::tinhtongtienve() {
	return this->giatien + this->sotrochoi*tientrathem1tro;
}
