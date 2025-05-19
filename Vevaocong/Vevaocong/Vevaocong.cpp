#include<iostream>
#include<string>
#include"Vevaocong.h"
Vevaocong::Vevaocong() {
	this->hoten = "***";
	this->mave = "***";
	this->namsinh = 0;
};
Vevaocong::~Vevaocong() {
}
void Vevaocong::nhap() {
	cin.ignore();
	cout << "\nNhap ma ve: ";
	getline(cin, this->mave);
	cout << "\nNhap ho va ten: ";
	getline(cin, this->hoten);
	cout << "\nNhap nam sinh: ";
	cin >> this->namsinh;
}
void Vevaocong::xuat()const {
	cout << "\nMa ve: " << this->mave;
	cout << "\nHo va ten: " << this->hoten;
	cout << "\nNam sinh: " << this->namsinh;
}
