#include <bits/stdc++.h>

using namespace std;

class sinhVien{
	private:
		string ten, ns;
		double gpa;
		static string truong;
	public:
		sinhVien(){
			cout << "Nhap Thong Tin:" << endl;
		}
		~sinhVien(){
			cout << "Ket Thuc";
			cout << endl;
		}
		void in();
		void out();
};

string sinhVien::truong = "hvcnbcvt";

void sinhVien::in(){
	getline(cin, ten);
	cin >> this->ns >> this->gpa; cin.ignore();
}

void sinhVien::out(){
	cout << this->ten << ' ' << this->ns << ' ' << this->gpa << ' ' << this->truong;
	cout << endl;
}

int main(){
	sinhVien x;
	x.in();
	x.out();
	sinhVien y;
	y.in();
	y.out();
	return 0;
}
