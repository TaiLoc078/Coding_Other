#include <bits/stdc++.h>

using namespace std;

int n, a[100], tmp;

void khoiTao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		tmp = 0;
	}
	else{
		a[i] = 1;
	}
}

int main(){
	cin >> n;
	khoiTao();
	vector<string> ve;
	tmp = 1;
	sinh();
	while(tmp){
		string s = "";
		for(int i = 1; i <= n; i++){
			if(a[i] == 1){
				s += to_string(i) + " ";
			}
		}
		s.pop_back();
		ve.push_back(s);
		sinh();
	}
	sort(ve.begin(), ve.end());
	for(string x : ve){
		cout << x << endl;
	}
}
