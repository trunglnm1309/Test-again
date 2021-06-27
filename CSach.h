#pragma once
#include <iostream>
#include <String>
using namespace std;

class CSach
{
protected:
	string tensach;
	int gia;
	int namxb;
public:
	int theloai;
	CSach()
	{
		theloai = 0;
	}
	void Nhap()
	{
		cout << "Nhap ten sach: ";
		cin.ignore();
		getline(cin, tensach);
		cout << "Nhap nam xuat ban: ";
		cin >> namxb;
		cout << "Nhap gia sach: ";
		cin >> gia;
	}
	void Xuat()
	{
		cout << "Ten sach: " << tensach << endl;
		cout << "Nam xuat ban: " << namxb << endl;
		cout << "Gia sach: " << gia << endl;
	}
};
