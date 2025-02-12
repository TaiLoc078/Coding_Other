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
	return a.code < b.code;
}

int main(){
	sinhVien x;
	vector<sinhVien> ve;
	while(cin >> x){
		ve.push_back(x);
	}
	sort(ve.begin(), ve.end(), cmp);
	for(int i = 0; i < ve.size(); i++){
		cout << ve[i] << endl;
	}
	return 0;
}
