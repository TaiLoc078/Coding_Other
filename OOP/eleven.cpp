#include <bits/stdc++.h>

using namespace std;

struct nhanVien{
	string ten, gtinh, ns, dchi, mso, hdong, mnv;
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

istream &operator >> (istream &cin, nhanVien &x){
	x.mnv = "";
	for(int i = 1; i <= (5 - to_string(x.cnt).size()); i++){
		x.mnv += "0";
	}
	x.mnv += to_string(x.cnt);
	x.cnt += 1;
	getline(cin, x.ten);
	cin >> x.gtinh >> x.ns; cin.ignore();
	getline(cin, x.dchi);
	cin >> x.mso >> x.hdong; cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, nhanVien x){
	cout << x.mnv << ' ' << x.ten << ' ' << x.gtinh << ' ' << chuanHoa(x.ns) << ' ' << x.dchi << ' ' << x.mso << ' ' << chuanHoa(x.hdong);
	return cout;
}

int main(){
	int n; cin >> n; cin.ignore();
	nhanVien x;
	for(int i = 0; i < n; i++){
		cin >> x;
		cout << x << endl;
	}
	return 0;
}
