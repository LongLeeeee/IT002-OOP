#pragma once
#include<string>
#include<fstream>
using namespace std;
class nuocHoa {
protected:
	string magoi;
	string loai;
	int dungtich;
	int donGia;
public:
	virtual void nhap();
	virtual void xuat();
	virtual int tinhTien();
};
class nuocHoaHong : public nuocHoa {
public:
	nuocHoaHong() {
		this->donGia = 20;
		this->loai = "Nuoc hoa hong";
	}
};
class nuocHoaCuc : public nuocHoa {
public:
	nuocHoaCuc() {
		this->donGia = 15;
		this->loai = "Nuoc hoa cuc";
	}
};