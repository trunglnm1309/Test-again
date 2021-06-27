#include <iostream>
#include "CSachGK.h"
#include "CSachTT.h"
#include "CThuVien.h"
using namespace std;

int main()
{
	CThuVien tv;
	tv.Nhap();
	tv.Xuat();
	tv.SGKMax();
	system("pause");
	return 0;
}