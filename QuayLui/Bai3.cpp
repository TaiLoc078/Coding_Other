#include <bits/stdc++.h>

using namespace std;

int n, k, a[100];
vector<string> ve;

void in(){
	for(int i = 1; i <= k; i++){
		cout << ve[a[i] - 1] << ' ';
	}
	cout << endl;
}

void ql(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			in();
		}
		else{
			ql(i + 1);
		}
	}
}

int main(){
	cin >> n >> k;
	int cnt = n;
	set<string> se;
	while(cnt--){
		string tmp;
		cin >> tmp;
		se.insert(tmp);
	}
	for(string x : se){
		ve.push_back(x);
	}
	n = ve.size();
	a[0] = 0;
	ql(1);
	return 0;
}
