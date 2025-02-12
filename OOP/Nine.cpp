#include <bits/stdc++.h>

using namespace std;

struct sinhVien{
	string msv, ten, lop, ns;
	double gpa;
	int cnt = 1;
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
	x.msv = "SV";
	for(int i = 1; i <= (3 - to_string(x.cnt).size()); i++){
		x.msv += "0";
	}
	x.msv += to_string(x.cnt);
	x.cnt += 1;
	getline(cin, x.ten);
	cin >> x.lop >> x.ns >> x.gpa; cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, sinhVien x){
	cout << x.msv << ' ' << x.ten << ' ' << x.lop << ' ' << chuanHoa(x.ns) << ' ' << fixed << setprecision(2) << x.gpa;
	return cout;
}

int main(){
	int n; cin >> n; cin.ignore();
	sinhVien x;
	for(int i = 0; i < n; i++){
		cin >> x;
		cout << x << endl;
	}
	return 0;
}
