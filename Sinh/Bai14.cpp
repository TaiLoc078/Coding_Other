#include <bits/stdc++.h>

using namespace std;

int a[100], n, k;
set<int> se;
vector<int> ve;

void khoiTao(){
	for(int i = 1; i <= k; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	for(int x : se){
		ve.push_back(x);
	}
}

int main(){
	cin >> n >> k;
	khoiTao();
	next_permutation(ve.begin(), ve.end());
	int dem = 0;
	for(int i = 1; i <= ve.size(); i++){
		dem += se.count(ve[i]);
	}
	cout << k - dem;
	return 0;
}
