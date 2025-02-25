#include <bits/stdc++.h>

using namespace std;

class sinhVien{
	private:
		static int cnt;
		string ten;
	public:
		friend istream& operator >> (istream &cin, sinhVien &x);
		friend ostream& operator << (ostream &cout, sinhVien x);
};

int sinhVien::cnt = 0;

istream& operator >> (istream &cin, sinhVien &x){
	cin >> x.ten;
	x.cnt++;
	return cin;
}

ostream& operator << (ostream &cout, sinhVien x){
	cout << x.ten << ' ' << x.cnt;
	return cout;
}

int main(){
	sinhVien a[5];
	for(int i = 0; i < 5; i++){
		cin >> a[i];
	}
	for(int i = 0; i < 5; i++){
		cout << a[i] << endl;
	}
	return 0;
}
