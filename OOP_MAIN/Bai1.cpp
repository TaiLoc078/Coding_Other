#include <bits/stdc++.h>

using namespace std;

class sinhVien{
	private:
		string ten, ns;
		double gpa;
	public:
		void nhap();
		friend void in(sinhVien x);
};

void sinhVien::nhap(){
	cin >> ten >> ns >> gpa;
}

void in(sinhVien x){
	cout << x.ten << x.ns<< x.gpa;
}

int main(){
	sinhVien x;
	x.nhap();
	in(x);
	return 0;
}
