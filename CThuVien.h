#pragma once
#include "CSachGK.h"
#include "CSachTT.h"
using namespace std;

class CThuVien
{
private:
	string tenDS;
	int n;
	CSach** arr;
public:
	void Nhap()
	{
		cout << "Nhap so luong: ";
		cin >> n;
		arr = new CSach * [n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap the loai voi 1: SGK, 2: STT: ";
			int theloai;
			cin >> theloai;
			switch (theloai)
			{
			case 0:
			{
				arr[i] = new CSach();
				arr[i]->Nhap();
				break;
			}
			case 1:
			{
				arr[i] = new CSachGK();
				((CSachGK*)arr[i])->Nhap();
				break;
			}
			case 2:
			{
				arr[i] = new CSachTT();
				((CSachTT*)arr[i])->Nhap();
				break;
			}
			default:
				break;
			}
		}
	}
	void Xuat()
	{
		cout << "\n THONG TIN SACH: \n";
		for (int i = 0; i < n; i++)
		{
			switch (arr[i]->theloai)
			{
			case 1:
			{
				((CSachGK*)arr[i])->Xuat();
				cout << endl;
				break;
			}
			case 2:
			{
				((CSachTT*)arr[i])->Xuat();
				cout << endl;
				break;
			}
			default:
				break;
			}
		}
	}
	void SGKMax()
	{
		int temp, vt, flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->theloai == 1)
			{
				temp = ((CSachGK*)arr[i])->getgia();
				if (flag < temp)
				{
					flag = temp;
					vt = i;
				}
			}
		}
		cout << "\nSGK co gia cao nhat: \n";
		((CSachGK*)arr[vt])->Xuat();
	}
};