#pragma once
#include <iostream>
#include "CSach.h"

class CSachGK : public CSach
{
private:
	string mon;
public:
	CSachGK()
	{
		theloai = 1;
	}
	int getgia()
	{
		return gia;
	}
	void setgia(int newgia)
	{
		gia = newgia;
	}
	void Nhap()
	{
		CSach::Nhap();
		cout << "Nhap mon hoc cua SGK: ";
		cin.ignore();
		getline(cin, mon);
	}
	void Xuat()
	{
		CSach::Xuat();
		cout << "Mon hoc cua SGK: " << mon << endl;
	}
};
