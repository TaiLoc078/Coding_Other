#include <bits/stdc++.h>

using namespace std;

int tmp, a[100];
string s;
vector<char> ve;

void khoiTao(){
	for(int i = 1; i <= ve.size(); i++){
		a[i] = i;
	}
}

int main(){
	cin >> s;
	tmp = 1;
	set<char> se;
	for(char x : s){
		se.insert(x);
	}
	for(char x : se){
		ve.push_back(x);
	}
	khoiTao();
	do{
		for(int i = 1; i <= ve.size(); i++){
			cout << ve[a[i] - 1];
		}
		cout << endl;
	}while(next_permutation(a + 1, a + ve.size() + 1));
	return 0;
}
