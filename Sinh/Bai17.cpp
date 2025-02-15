#include <bits/stdc++.h>

using namespace std;

int n, tmp;
string s; string b;

void sinh(){
	int i = b.size() - 1;
	while(i >= 0 && b[i] == '1'){
		b[i] = '0';
		i--;
	}
	if(i == -1){
		tmp = 0;
	}
	else{
		b[i] = '1';
	}
}

bool check(string save){
	string save1 = save;
	reverse(save1.begin(), save1.end());
	return save == save1;
}

int main(){
	cin >> n;
	for(int i = 1; i <= n / 2; i++){
		tmp = 1;
		s = string(i, '0');
		string t = s;
		reverse(t.begin(), t.end());
		b = s + t;
		while(tmp){
			if(check(b)){
				cout << b << endl;
			}
			sinh();
		}
	}
}
