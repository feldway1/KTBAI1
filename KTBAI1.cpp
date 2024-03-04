// KTBAI1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//NGUYEN THI HONG DAO - DE CHAN

#include <iostream>
using namespace std;
int main()
{
	float a, b, P, S;
	
	cout << "CHUONG TRINH TINH DIEN TICH VA CHU VI\n";
	cout << "Nhap chieu dai: "; cin >> a;
	cout << "Nhap chieu rong: "; cin >> b;
	P = (a + b) * 2;
	S = a * b;
	cout << "Dien tich cua hinh chu nhat la " << P << endl;
	cout << "Chu vi cua hinh chu nhat la " << S << endl;
	return 0;
}


