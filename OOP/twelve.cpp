#include <bits/stdc++.h>

using namespace std;

int cnt = 1;
struct nhanVien{
	string ten, gtinh, ns, dchi, mso, hdong, mnv;
};

string nsNew(string s){
	stringstream ss(s);
	string word = "", tmp;
	while(getline(ss, tmp, '/')){
		word = tmp + word;
	}
	return word;
}

string chuanHoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

istream &operator >> (istream &cin, nhanVien &x){
	x.mnv = "";
	for(int i = 1; i <= (5 - to_string(cnt).size()); i++){
		x.mnv += "0";
	}
	x.mnv += to_string(cnt);
	cnt += 1;
	getline(cin, x.ten);
	cin >> x.gtinh >> x.ns; cin.ignore();
	getline(cin, x.dchi);
	cin >> x.mso >> x.hdong; cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, nhanVien x){
	cout << x.mnv << ' ' << x.ten << ' ' << x.gtinh << ' ' << chuanHoa(x.ns) << ' ' << x.dchi << ' ' << x.mso << ' ' << chuanHoa(x.hdong);
	return cout;
}

bool cmp(nhanVien a, nhanVien b){
	if(a.ns != b.ns){
		return nsNew(a.ns) < nsNew(b.ns);
	}
	else{
		return a.mnv < b.mnv;
	}
}

int main(){
	int n; cin >> n; cin.ignore();
	nhanVien x;
	nhanVien a[n];
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

