#pragma once
#include <iostream>
#include <String>
using namespace std;

class Title
{
private:
	string tensach;
	string tacgia;
	int namxb;
	int gia;
	string theloai;
	Title* arr;
	int n;
public:
	friend istream& operator >> (istream&, Title&);
	friend ostream& operator << (ostream&, Title&);
	Title& operator ++ ();
	Title& operator [] (int);
	Title getRomantic();
	~Title();
};