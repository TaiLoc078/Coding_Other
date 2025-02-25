#include <bits/stdc++.h>

using namespace std;

string s;
int n, save;
vector<string> ve;
string res[301];

void khoiTao(){
	cin >> n;
	while(n--){
		int tmp; cin >> tmp;
		cout << stoll(res[tmp]) << endl;
	}
}

void sinh(){
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '8'){
		s[i] = '0';
		--i;
	}
	if(i == -1){
		save = 0;
	}
	else{
		s[i] = '8';
	}
}

int main(){
	s = string(19, '0');
	save = 1;
	sinh();
	while(save){
		ve.push_back(s);
		sinh();
	}
	for(int i = 1; i <= 300; i++){
		for(int j = 0; j < ve.size(); j++){
			if(stoll(ve[j]) % i == 0){
				res[i] = ve[j];
				break;
			}
		}
	}
	khoiTao();
}
