#include <bits/stdc++.h>

using namespace std;

class nhanVien{
private:
	string ten, ns;
	double luong;
	static string congty;
public:
	void nhap(){
		cin >> this->ten >> this->ns >> this->luong;
	}
	void xuat(){
		cout << ten << endl << ns << endl << luong << endl << congty;
	}
};

string nhanVien::congty = "abc";

int main(){
	nhanVien x;
	x.nhap();
	x.xuat();
	return 0;
}
