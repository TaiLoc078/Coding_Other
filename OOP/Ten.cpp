#include <bits/stdc++.h>


using namespace std;

struct sinhVien{
	string msv, ten, lop, ns;
	double gpa;
	int cnt = 1;
};

string chTen(string s){
	stringstream ss(s);
	string tmp, word = "";
	while(getline(ss, tmp, ' ')){
		tmp[0] = toupper(tmp[0]);
		for(int i = 1; i < tmp.size(); i++){
			tmp[i] = tolower(tmp[i]);
		}
		word += tmp + " ";
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

istream &operator >> (istream &cin, sinhVien &x){
	x.msv = "SV";
	for(int i = 1; i <= (3 - to_string(x.cnt).size()); i++){
		x.msv += "0";
	}
	x.msv += to_string(x.cnt);
	x.cnt += 1;
	getline(cin, x.ten);
	cin >> x.lop >> x.ns >> x.gpa; cin.ignore();
	return cin;
}

ostream &operator << (ostream &cout, sinhVien x){
	cout << x.msv << ' ' << chTen(x.ten) << x.lop << ' ' << chuanHoa(x.ns) << ' ' << fixed << setprecision(2) << x.gpa;
	return cout;
}

bool cmp(sinhVien a, sinhVien b){
	if(a.gpa != b.gpa){
		return a.gpa > b.gpa;
	}
	else{
		return a.msv < b.msv;
	}
}

int main(){
	int n; cin >> n; cin.ignore();
	sinhVien x;
	sinhVien a[n];
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
