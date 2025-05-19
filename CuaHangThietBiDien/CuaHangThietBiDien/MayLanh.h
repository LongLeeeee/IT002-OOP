#pragma once
#include"ThietBiDienTu.h"
class MayLanh : public ThietBiDienTu {
protected:
	bool CNInverter = false;
};
class MayLanh1Chieu : public MayLanh {
public:
	MayLanh1Chieu(bool);
	void xuat()const;
};
class MayLanh2Chieu : public MayLanh {
protected:
	bool CNKhuKhuan = false;
	bool CNKhuMui = false;
public:
	MayLanh2Chieu(bool, bool, bool);
	void xuat()const;
	int getGiaTien();
};