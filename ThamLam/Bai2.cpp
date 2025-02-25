#include <bits/stdc++.h>

using namespace std;

void lonNhat(string &s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
}

void nhoNhat(string &s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
}

string inkqln(string &a, string &b){
	return to_string(stoll(a) + stoll(b));
}

string inkqnn(string &a, string &b){
	return to_string(abs(stoll(a) + stoll(b)));
}

int main(){
	string a, b;
	cin >> a >> b;
	string c, d;
	c = a; d = b;
	lonNhat(a); lonNhat(b);
	cout << inkqln(a, b) << ' ';
	nhoNhat(c); nhoNhat(d);
	cout << inkqnn(c, d);
	return 0;
}
