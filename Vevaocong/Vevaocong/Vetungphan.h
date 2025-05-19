#pragma once
#include"Vevaocong.h"
using namespace std;
class Vetungphan : public Vevaocong {
private:
	long long giatien ;
	long long tientrathem1tro = 20000;
	int sotrochoi;
public:
	Vetungphan() {
		this->giatien = 70000;
		this->tientrathem1tro = 20000;
	}
	~Vetungphan() {}
	virtual void nhap();
	virtual void xuat()const;
	virtual long long tinhtongtienve();
};