#include<iostream>
#include<string>
#include"nhanvien.h"
using namespace std;
nhanvien::nhanvien() {
	this->ten = "***";
	this->ngaysinh = "**/**/**";
	this->luongcoban = 0;
}
nhanvien::~nhanvien(){
}
void nhanvien::nhap() {
	cin.ignore();
	cout << "\nNhap ho va ten: ";
	getline(cin, ten);
	cout << "\nNhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
	cout << "\nNhap luong co ban: ";
	cin >> luongcoban;
}
void nhanvien::xuat()const {
	cout << "\nHo va ten: " << ten;
	cout << "\nNgay thang nam sinh: " << ngaysinh;
	cout << "\nLuong co ban: " << luongcoban;
}
long long nhanvien::tinhluong() {
	return 0;
}