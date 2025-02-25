#include <bits/stdc++.h>

using namespace std;

string process(string x){
	stringstream ss(x);
	string tmp;
	string word = "";
	while(getline(ss, tmp, ' ')){
		tmp[0] = toupper(tmp[0]);
		for(int i = 1; i < tmp.size(); i++){
			tmp[i] = tolower(tmp[i]);
		}
		word += tmp + " ";
	}
	word.pop_back();
	return word;
}

class sinhVien{
	private:
		string user, pass, ten, vao, ra;
	public:
		friend string process(string x);
		int xuly(){
			int h1 = stoi(vao.substr(0, 2));
			int p1 = stoi(vao.substr(3, 2));
			int h2 = stoi(ra.substr(0, 2));
			int p2 = stoi(ra.substr(3, 2));
			int tmp = h2 * 60 + p2 - h1 * 60 - p1;
			return tmp;
		}
		string xulygio(){
			string res = "";
			res += to_string(xuly() / 60) + " gio ";
			res += to_string(xuly() % 60) + " phut";
			return res;
		}
		friend bool operator < (sinhVien a, sinhVien b){
			if(a.xuly() != b.xuly()){
				return a.xuly() > b.xuly();
			}
			else{
				return a.user < b.user;
			}
		}
		friend istream& operator >> (istream &cin, sinhVien &x){
			cin >> x.user >> x.pass; getchar();
			getline(cin, x.ten);
			cin >> x.vao >> x.ra;
			return cin;
		}
		friend ostream& operator << (ostream &cout, sinhVien x){
			cout << x.user << ' ' << x.pass << ' ' << process(x.ten) << ' ' << x.xulygio();
			return cout;
		}
};

int main(){
	int n; cin >> n;
	sinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		cout << a[i];
		cout << endl;
	}
	return 0;
}

