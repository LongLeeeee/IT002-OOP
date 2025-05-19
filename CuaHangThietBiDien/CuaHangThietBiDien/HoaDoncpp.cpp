#include<iostream>
#include"HoaDo.h"
void HoaDon::nhap() {
	cout << "\nNhap so luong thiet bi trong hoa don: ";
	cin >> this->soluongThietBi;
	this->DSThietBi = new ThietBiDienTu * [this->soluongThietBi];
	this->ThongtinKH = new KhachHang;
	for (int i = 0; i < this->soluongThietBi; i++) {
		cout << "\nNhap thong tin khach hang.";
		this->ThongtinKH->nhap();
		cout << "\nChon loai thiet bi ban muon mua (1-May lanh, 2-May quat): ";
		int luachon;
		cin >> luachon;
		if (luachon == 1) {
			int lc;
			cout << "\nChon loai may lanh (1-1chieu, 2-2 chieu): ";
			cin >> lc;
			bool check1;
			cout << "\nCo cong nghe Inveter khong (1-Co, 0-Khong): ";
			cin >> check1;
			if (lc == 1) {
				this->DSThietBi[i] = new MayLanh1Chieu(check1);
			}
			else if (lc == 2) {
				cout << "\nCo cong nghe khu khuan khong (1-Co, 0-Khong): ";
				bool check2;
				cin >> check2;
				cout << "\nCo cong nghe khu mui khong (1-Co, 0-Khong): ";
				bool check3;
				cin >> check3;
				this->DSThietBi[i] = new MayLanh2Chieu(check1, check2, check3);
			}
		}
		else if (luachon == 2) {
			cout << "\nChon loai may quat (1-Dung, 2-Hoi nuoc, 3-Sac Dien): ";
			int lc;
			cin >> lc;
			if (lc == 1) {
				this->DSThietBi[i] = new MayQuatDung;
			}
			else if (lc == 2) {
				this->DSThietBi[i] = new MayQuatHoiNuoc;
			}
			else if (lc == 3) {
				this->DSThietBi[i] = new MayQuatSacDien;
			}
		}
		this->DSThietBi[i]->nhap();
	}
}
void HoaDon::xaut(){
	cout << "\nSo luong thiet bi dien tu: " << this->soluongThietBi;
	for (int i = 0; i < this->soluongThietBi; i++) {
		this->DSThietBi[i]->xuat();
		this->Tongtien += this->DSThietBi[i]->getGiaTien();
	}
	cout << "\nTong tien cua hoa don la: " << this->Tongtien;
}