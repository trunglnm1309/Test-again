#include <iostream>
#include "CTitle.h"
using namespace std;

istream& operator >> (istream& is, Title& a)
{
	cout << "----------NHAP SACH----------\n";
	cout << "So luong sach can nhap: ";
	is >> a.n;
	a.arr = new Title[a.n];
	cout << endl;
	for (int i = 0; i < a.n; i++)
	{
		cout << "\tNhap sach thu " << i + 1 << ":\n";
		cout << "Nhap ten sach: ";
		is.ignore();
		getline(is, a.arr[i].tensach);
		cout << "Nhap ten tac gia: ";
		getline(is, a.arr[i].tacgia);
		cout << "Nhap nam xuat ban: ";
		is >> a.arr[i].namxb;
		cout << "Nhap gia: ";
		is >> a.arr[i].gia;
		cout << "Nhap the loai: ";
		is.ignore();
		getline(is, a.arr[i].theloai);
		cout << endl;
	}

	return is;
}

ostream& operator << (ostream& os, Title& a)
{
	os << "----------XUAT SACH----------\n";
	for (int i = 0; i < a.n; i++)
	{
		os << "\tSach thu " << i + 1 << ":\n";
		os << "Ten sach: " << a.arr[i].tensach << endl;
		os << "ten tac gia: " << a.arr[i].tacgia << endl;
		os << "Nam xuat ban: " << a.arr[i].namxb << endl;
		os << "Gia: " << a.arr[i].gia << endl;
		os << "The loai: " << a.arr[i].theloai << endl;
		os << endl;
	}
	return os;
}

Title& Title:: operator ++ ()
{
	gia += 100000;
	return *this;
}

Title& Title::operator[](int i)
{
	if (i > n)
	{
		return arr[0];
	}
	return arr[i];
}

Title Title::getRomantic()
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i].theloai == "Romantic")
		{
			return arr[i];
		}
	}
}

Title::~Title()
{
	if (n > 0)
	{
		n = 0;
		delete[] arr;
	}
}