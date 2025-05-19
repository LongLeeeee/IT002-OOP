#pragma once
#include"Vevaocong.h"
using namespace std;
class Vetrongoi : public Vevaocong {
private:
	long long giatien;
public:
	Vetrongoi() {
		this->giatien = 200000;
	}
	~Vetrongoi() {};
	virtual void nhap();
	virtual void xuat()const;
	virtual long long tinhtongtienve();
};