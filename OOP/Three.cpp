#include <bits/stdc++.h>

using namespace std;

struct sinhVien{
	string mssv, ten, lop, ns;
	double gpa;
};

string chuanHoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

istream &operator >> (istream &cin, sinhVien &x){
	getline(cin, x.ten);
	cin >> x.lop >> x.ns >> x.gpa;
	cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, sinhVien x){
	cout << "SV001" << ' ' << x.ten << ' ' << x.lop << ' ' << chuanHoa(x.ns) << ' ' << fixed << setprecision(1) << x.gpa;
	return cout;
}

int main(){
	sinhVien x;
	cin >> x;
	cout << x;
	return 0;
}
