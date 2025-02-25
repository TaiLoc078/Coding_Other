#include <bits/stdc++.h>

using namespace std;
class thongTin{
	private:
		string ten, ns;
	public:
		thongTin(){
			cout << "Ham tao cua thongTin" << endl;
		}
		void nhap(){
			cin >> ten >> ns;
		}
		void xuat(){
			cout << ten << ns;
		}
		~thongTin(){
			cout << "Ham huy cua thongTin" << endl;
		}
};

class sinhVien : public thongTin{
	private:
		double gpa;
	public:
		sinhVien(){
			cout << "Ham tao cua sinhVien" << endl;
		}
		void nhap_diem(){
			cin >> gpa;
		}
		void xuat_diem(){
			cout << gpa << endl;
		}
		void xuat(){
			thongTin::xuat();
			cout << gpa << endl;
		}
		~sinhVien(){
			cout << "Ham huy cua sinhVien" << endl;
		}
};
int main(){
	sinhVien x;
	x.nhap_diem();
	x.xuat_diem();
	x.nhap();
	x.xuat();
	return 0;
}

