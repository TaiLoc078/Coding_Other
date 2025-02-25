#include <bits/stdc++.h>

using namespace std;

struct gameThu{
	string user, pass, ten, vao, ra, time;
};

string change(string s){
	stringstream ss(s);
	string tmp, word = "";
	while(getline(ss, tmp, ':')){
		word += tmp;
	}
	return word;
}

string final(string s){
		stringstream ss(s);
		string tmp;
		getline(ss, tmp, ':');
		tmp += " gio ";
		string save = "";
		for(int i = s.size() - 1; i >= s.size() - 2; i--){
			save = s[i] + save;
		}
		tmp += save + " phut";
		return tmp;
}

istream &operator >> (istream &cin, gameThu &x){
	cin >> x.user >> x.pass; cin.ignore();
	getline(cin, x.ten);
	cin >> x.vao >> x.ra;
	x.time = "";
	int phut = 60 - stoi(x.vao.substr(3, 2)) + stoi(x.ra.substr(3, 2));
	int gio = 0;
	if(phut >= 60){
		gio = phut / 60;
		phut = phut % 60;
	}
	stringstream ss1(x.vao);
	stringstream ss2(x.ra);
	string word;
	getline(ss1, word, ':');
	x.vao = to_string(stoi(word) + 1);
	getline(ss2, word, ':');
	x.ra = to_string(stoi(word));
	x.time += to_string(stoi(x.ra) - stoi(x.vao) + gio) + ":" + to_string(phut);
	return cin;
}

ostream &operator << (ostream &cout, gameThu x){
	cout << x.user << ' ' << x.pass << ' ' << x.ten << ' ' << final(x.time);
	return cout;
}

bool cmp(gameThu a, gameThu b){
	if(a.time != b.time){
		return change(a.time) > change(b.time);
	}
	else{
		if(a.user.size() != b.user.size()){
			string ab = a.user + b.user;
			string ba= b.user + a.user;
			return ab > ba;
		}
		else{
			return a.user < b.user;
		}
	}
}

int main(){
	int n; cin >> n; cin.ignore();
	gameThu x;
	gameThu a[n];
	for(int i = 0; i < n; i++){
		cin >> x;
		a[i] = x;
	}
	sort(a, a + n, cmp);
	for(gameThu &x : a){
		cout << x << endl;
	}
	return 0;
}
