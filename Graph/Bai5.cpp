#include <bits/stdc++.h>

using namespace std;

void xuly(int i, string s){
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		int tmp1 = stoi(tmp);
		if(tmp1 > i){
			cout << i << ' ' << tmp1;
		}
		cout << endl;
	}
}

int main(){
	int n; cin >> n; cin.ignore(1);
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		xuly(i, s);
	}
	return 0;
}
