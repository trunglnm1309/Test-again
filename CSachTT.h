#pragma once
#include <iostream>
#include "CSach.h"
using namespace std;

class CSachTT : public CSach
{
private:
	string tacgia;
public:
	CSachTT()
	{
		theloai = 2;
	}
	void Nhap()
	{
		CSach::Nhap();
		cout << "Nhap tac gia cua tieu thuyet: ";
		getline(cin, tacgia);
	}
	void Xuat()
	{
		CSach::Xuat();
		cout << "Tac gia cua tieu thuyet: " << tacgia << endl;
	}
};
