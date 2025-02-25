#include <bits/stdc++.h>

using namespace std;

struct thiSinh{
	string code, ten;
	double toan, ly, hoa;
	double kv(){
		string tmp = code.substr(2, 1);
		if(tmp == "1"){
			return 0.5;
		}
		else if(tmp == "2"){
			return 1.0;
		}
		else{
			return 2.5;
		}
	}
	double tong(){
		return toan + ly + hoa + kv();
	}
	string kq(){
		if(tong() >= 24){
			return "TRUNG TUYEN";
		}
		else{
			return "TRUOT";
		}
	}
};

istream &operator >> (istream &cin, thiSinh &x){
	cin >> x.code; cin.ignore();
	getline(cin, x.ten);
	cin >> x.toan >> x.ly >> x.hoa;
	return cin;
}

ostream &operator << (ostream &cout, thiSinh x){
	cout << x.code << ' ' << x.ten << ' ' << x.code.substr(2, 1) << ' ';
	if(x.tong() - (double)floor(x.tong()) != 0){
		cout << x.tong() << ' ';
	}
	else{
		cout << fixed << setprecision(0) << x.tong() << ' ';
	}
	cout << x.kq();
	return cout;
}

int main(){
	thiSinh x;
	cin >> x;
	cout << x;
	return 0;
}
