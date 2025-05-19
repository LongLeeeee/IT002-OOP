#include<iostream>
#include<string>
#include"Vetrongoi.h"
using namespace std;
void Vetrongoi::nhap() {
	Vevaocong::nhap();
}
void Vetrongoi::xuat()const {
	Vevaocong::xuat();
	cout << "\nSo tro choi: tat ca.";
	cout << "\nTien ve: " << this->giatien;
}
long long Vetrongoi::tinhtongtienve() {
	return this->giatien;
}