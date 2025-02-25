#include <bits/stdc++.h>

using namespace std;

string cnt = "1";

struct hangHoa{
	string mmh, ten, dv;
	long long mua, ban;
	long long loi;
	long long loiNhuan(){
		loi = ban - mua;
		return loi;
	}
};

bool cmp(hangHoa a, hangHoa b){
	if(a.loiNhuan() != b.loiNhuan()){
		return a.loi > b.loi;
	}
	else{
		return a.mmh < b.mmh;
	}
}

istream &operator >> (istream &cin, hangHoa &x){
	x.mmh.clear();
	x.mmh = "MH";
	for(int i = 1; i <= (4 - cnt.size()); i++){
		x.mmh = x.mmh + "0";
	}
	x.mmh = x.mmh + cnt; cnt = to_string(stoi(cnt) + 1);
	getline(cin, x.ten);
	cin >> x.dv >> x.mua >> x.ban; cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, hangHoa x){
	cout << x.mmh << ' ' << x.ten << ' ' << x.dv << ' ' << x.mua << ' ' << x.ban << ' ' << x.loiNhuan();
	return cout;
}

int main(){
	int n; cin >> n; cin.ignore();
	hangHoa x;
	hangHoa a[n];
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
