#include <bits/stdc++.h>

using namespace std;

struct nhanVien{
	string mnv, ten, gt, ns, dchi, hdong;
	string mst;
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
	getline(cin, x.ten);
	cin >> x.gt >> x.ns; cin.ignore();
	getline(cin, x.dchi);
	cin >> x.mst; cin.ignore();
	getline(cin, x.hdong);
	return cin;
}

ostream &operator << (ostream &cout, nhanVien x){
	cout << "00001" << ' ' << x.ten << ' ' << x.gt << ' ' << chuanHoa(x.ns) << ' ' << x.dchi << ' ' << x.mst << ' ' << chuanHoa(x.hdong);
	return cout;
}

int main(){
	nhanVien x;
	cin >> x;
	cout << x;
	return 0;
}
