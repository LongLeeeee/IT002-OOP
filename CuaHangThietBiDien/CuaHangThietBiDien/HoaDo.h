#pragma once
#include"KhachHang.h"
#include"MayLanh.h"
#include"MayQuat.h"
class HoaDon {
protected:
	ThietBiDienTu** DSThietBi;
	int soluongThietBi;
	KhachHang* ThongtinKH;
	int Tongtien = 0;
public:
	void nhap();
	void xaut();
};