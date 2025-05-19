#pragma once
#include"ThietBiDienTu.h"
class MayQuat : public ThietBiDienTu {
};
class MayQuatDung : public MayQuat {
public:
	MayQuatDung();
	int getGiaTien();
};
class MayQuatHoiNuoc : public MayQuat {
protected:
	int DungTichNuoc;
public:
	MayQuatHoiNuoc();
	void nhap();
	void xuat()const;
	int getGiaTien();
};
class MayQuatSacDien : public MayQuat {
protected:
	int DungLuongPin;
public:
	MayQuatSacDien();
	void nhap();
	void xuat()const;
	int getGiaTien();
};