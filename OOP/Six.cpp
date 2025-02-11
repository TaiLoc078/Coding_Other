#include <bits/stdc++.h>

using namespace std;

struct nhanVien{
	string ten, cvu;
	long long cb, sn;
	long long coBan(){
		return cb * sn;
	}
	long long phuCap(){
		if(sn >= 25){
			return 0.20 * coBan();
		}
		else if(sn >= 22 && sn < 25){
			return 0.1 * coBan();
		}
		else{
			return 0;
		}
	}
	long long thuong(){
		if(cvu == "GD"){
			return 250000;
		}
		else if(cvu == "PGD"){
			return 200000;
		}
		else if(cvu == "TP"){
			return 180000;
		}
		else{
			return 150000;
		}
	}
	long long thuNhap(){
		return coBan() + phuCap() + thuong();
	}
};

istream &operator >> (istream &cin, nhanVien &x){
	getline(cin, x.ten);
	cin >> x.cb >> x.sn >> x.cvu;
	return cin;
}

ostream &operator << (ostream &cout, nhanVien x){
	cout << "NV01" << ' ' << x.ten << ' ' << x.coBan() << ' ' << x.phuCap() << ' ' << x.thuong() << ' ' << x.thuNhap();
	return cout;
}

int main(){
	nhanVien x;
	cin >> x;
	cout << x;
	return 0;
}
