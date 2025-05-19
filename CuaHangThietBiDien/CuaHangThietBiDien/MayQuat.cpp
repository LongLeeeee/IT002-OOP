#include<iostream>
#include"MayQuat.h"
using namespace std;
MayQuatDung::MayQuatDung() {
	this->maSP = 500;
	this->tenSP = "May quat dung.";
}
MayQuatHoiNuoc::MayQuatHoiNuoc() {
	this->tenSP = "May quat hoi nuoc.";
}
void MayQuatHoiNuoc::nhap() {
	ThietBiDienTu::nhap();
	cout << "\nNhap dung tich nuoc: ";
	cin >> this->DungTichNuoc;
	this->gia = this->DungTichNuoc * 400;

}
void MayQuatHoiNuoc::xuat()const {
	ThietBiDienTu::xuat();
	cout << "\nDung tich nuoc: " << this->DungTichNuoc;
}
int MayQuatHoiNuoc::getGiaTien(){
	return this->gia;
}
MayQuatSacDien::MayQuatSacDien() {
	this->tenSP = "May quat sac dien.";
}
void MayQuatSacDien::nhap() {
	ThietBiDienTu::nhap();
	cout << "\nNhap dung luong pin: ";
	cin >> this->DungLuongPin;
	this->gia = this->DungLuongPin * 400;

}
void MayQuatSacDien::xuat()const {
	ThietBiDienTu::xuat();
	cout << "\nDung luong pin: " << this->DungLuongPin;
}
int MayQuatSacDien::getGiaTien() {
	return this->gia;
}