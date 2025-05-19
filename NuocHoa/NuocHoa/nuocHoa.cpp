#include<iostream>
#include"nuocHoa.h"
#include<string>
using namespace std;
void nuocHoa::nhap() {
	cin.ignore();
	cout << "\nNhap ma so: ";
	getline(cin,this->magoi);
	cout << "\nNhap dung tich: ";
	cin >> this->dungtich;
}
void nuocHoa::xuat() {
	cout << "\nMa so: " << this->magoi;
	cout << "\nLoai san pham: " << this->loai;
	cout << "\nDung tich: " << this->dungtich;
	cout << "\nDon gia: " << this->donGia;
}
int nuocHoa::tinhTien() {
	return this->dungtich * this->donGia;
}