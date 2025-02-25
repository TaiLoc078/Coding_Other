#include <bits/stdc++.h>

using namespace std;

int cnt = 1;
struct hocSinh{
	string msv, ten;
	double toan, tv, nn, vl, hh, sh, ls, dia, gdcd, cn;
	string tb(){
		double tmp = (toan + tv + nn + vl + hh + sh + ls + dia + gdcd + cn) / 10;
		string s = to_string(tmp);
		stringstream ss(s);
		stringstream ss1(s);
		string a;
		getline(ss1, a, '.');
		string word;
		while(getline(ss, word, '.')){
		}
		string b = to_string(word[word.size() - 1]);
		for(int i = word.size() - 1; i >= 1; i--){
			if(word[i] - '0' >= 5){
				b = to_string(word[i - 1] - '0' + 1) + b;
				word[i - 1] = b[0];
			}
		}
		for(int i = 1; i <= b.size(); i++){
			b.pop_back();
		}
		return a + "." + b;
	}
	string rank(){
		if(stoi(tb()) >= 9){
			return "XUAT SAC";
		}
		else if(stoi(tb()) >= 8 && stoi(tb()) < 9){
			return "GIOI";
		}
		else if(stoi(tb()) >= 7 && stoi(tb()) < 8){
			return "KHA";
		}
		else if(stoi(tb()) >= 5 && stoi(tb()) < 7){
			return "TB";
		}
		else{
			return "YEU";
		}
	}
};

istream &operator >> (istream &cin, hocSinh &x){
	x.msv = "HS";
	for(int i = 1; i <= (2 - to_string(cnt).size()); i++){
		x.msv += "0";
	}
	x.msv += to_string(cnt);
	cnt += 1;
	getline(cin, x.ten);
	cin >> x.toan >> x.tv >> x.nn >> x.vl >> x.hh >> x.sh >> x.ls >> x.dia >> x.gdcd >> x.cn;
	cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, hocSinh x){
	cout << x.msv << ' ' << x.ten << ' ' << x.tb() << ' ' << x.rank();
	return cout;
}

bool cmp(hocSinh a, hocSinh b){
	if(a.tb() != b.tb()){
		return stoi(a.tb()) > stoi(b.tb());
	}
	else{
		return a.msv < b.msv;
	}
}

int main(){
	int n; cin >> n; cin.ignore();
	hocSinh x;
	hocSinh a[n];
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	return 0;
}
