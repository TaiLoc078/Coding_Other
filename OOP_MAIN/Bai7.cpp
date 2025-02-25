#include <bits/stdc++.h>

using namespace std;

class HS{
	static int cnt;
	private:
		string ma, ten;
		double d[10], dtb;
	public:
		void nhap(){
			ma = "HS00"; ma[3] += cnt % 10; ma[2] += cnt / 10 % 10;
			cnt++;
			dtb = 0;
			scanf("\n"); getline(cin, ten);
			for(int i = 0; i < 10; i++){
				cin >> d[i];
				dtb += d[i];
			}
			dtb /= 10;
		}
		string xepLoai(){
			if(dtb >= 9) return "XUAT SAC";
			else if(dtb >= 8) return "GIOI";
			else if(dtb >= 7) return "KHA";
			else if(dtb >= 5) return "TB";
			return "YEU";
		}
		bool operator < (HS other){
			if(this->dtb != other.dtb){
				return this->dtb > other.dtb;
			return this->ma < other.ma;
			}
		}
		void in(){
			cout << ma << ' ' << ten << ' ' << fixed << setprecision(1) << dtb << ' ' << xepLoai() << endl;
		}
};

int HS::cnt = 1;
int main(){
	int n; cin >> n;
	vector<HS> v;
	for(int i = 0; i < n; i++){
		HS x;
		x.nhap();
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++){
		v[i].in();
	}
}
