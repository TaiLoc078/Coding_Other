#include <bits/stdc++.h>

using namespace std;

struct sinhVien{
	string code, ten, lop, mail;
};

string chuanHoa(string s){
	stringstream ss(s);
	string tmp, word = "";
	while(getline(ss, tmp, ' ')){
		tmp[0] = toupper(tmp[0]);
		for(int i = 1; i < tmp.size(); i++){
			tmp[i] = tolower(tmp[i]);
		}
		word = word + tmp + " ";
	}
	return word;
}

istream &operator >> (istream &cin, sinhVien &x){
	cin >> x.code; cin.ignore();
	getline(cin, x.ten);
	cin >> x.lop >> x.mail;
	return cin;
}

ostream &operator << (ostream &cout, sinhVien x){
	cout << x.code <<' ' << chuanHoa(x.ten) << x.lop << ' ' << x.mail;
	return cout;
}

int main(){
	int n; cin >> n; cin.ignore();
	sinhVien x;
	sinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
	int cnt; cin >> cnt;
	for(int i = 1; i <= cnt; i++){
		string tmp;
		cin >> tmp;
		cout << "DANH SACH SINH VIEN LOP " << tmp << " :" << endl;
		for(int j = 0; j < n; j++){
			if(tmp == a[j].lop){
				cout << a[j] << endl;
			}
		}
	}
	return 0;
}
