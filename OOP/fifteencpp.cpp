#include <bits/stdc++.h>

using namespace std;

struct sinhVien{
	string code, ten, lop, mail;
};

istream &operator >> (istream &cin, sinhVien &x){
	cin >> x.code; cin.ignore();
	getline(cin, x.ten);
	cin >> x.lop >> x.mail;
	return cin;
}

ostream &operator << (ostream &cout, sinhVien x){
	cout << x.code << ' ' << x.ten << ' ' << x.lop << ' ' << x.mail;
	return cout;
}

bool cmp(sinhVien a, sinhVien b){
	if(a.lop != b.lop){
		return a.lop < b.lop;
	}
	else{
		return a.code < b.code;
	}
}

int main(){
	int n; cin >> n; cin.ignore();
	sinhVien x;
	sinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
	sort(a, a + n, cmp);
	for(sinhVien &x : a){
		cout << x << endl;
	}
	return 0;
}
