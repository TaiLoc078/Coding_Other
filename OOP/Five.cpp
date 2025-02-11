#include <bits/stdc++.h>

using namespace std;

struct teacher{
	string code, ten, luong_cb;
	long long hs(string s){
		string tmp = s.substr(2, 2);
		return stoll(tmp);
	}
	string cut(string s){
		return s.substr(0, 2);
	}
	long long thuNhap(){
		long long tmp = stoll(luong_cb);
		long long s = hs(code);
		if(cut(code) == "HT"){
			return tmp * s + 2000000;
		}
		else if(cut(code) == "HP"){
			return tmp * s + 900000;
		}
		else{
			return tmp * s + 500000;
		}
	}
};


istream &operator >> (istream &cin, teacher &x){
	cin >> x.code;
	cin.ignore();
	getline(cin, x.ten);
	cin >> x.luong_cb;
	return cin;
}

ostream &operator << (ostream &cout, teacher x){
	cout << x.code << ' ' << x.ten << ' ' << x.hs(x.code) << ' ' << x.thuNhap();
	return cout;
}


int main(){
	teacher x;
	cin >> x;
	cout << x;
	return 0;
}
