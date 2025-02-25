#include <bits/stdc++.h>

using namespace std;

class phanSo{
	private:
		long long tu, mau;
	public:
		friend void toiGian(phanSo &x);
		friend istream &operator >> (istream &cin, phanSo &x){
			cin >> x.tu >> x.mau;
			return cin;
		}
		friend ostream &operator << (ostream &cout, phanSo x){
			cout << x.tu << "/" << x.mau;
			return cout;
		}
};

long long ucln(long long a, long long b){
	while(b != 0){
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

void toiGian(phanSo &x){
	long long tmp = ucln(x.tu, x.mau);
	x.tu /= tmp;
	x.mau /= tmp;
}

int main(){
	phanSo x;
	cin >> x;
	toiGian(x);
	cout << x;
	return 0;
}
