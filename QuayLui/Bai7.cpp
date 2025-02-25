#include <bits/stdc++.h>

using namespace std;

int a[100], n, s, res = 1e9;

void ql(int i, int batdau, int sum){
	for(int j = batdau; j <= n; j++){
		if(sum + a[j] <= s){
			if(sum + a[j] == s){
				res = min(res, i);
			}
			else{
				ql(i + 1, j + 1, sum + a[j]);
			}
		}
	}
}

int main(){
	cin >> n >> s;
	int tmp = n;
	for(int i = 1; i <= tmp; i++){
		cin >> a[i];
	}
	ql(1, 1, 0);
	cout << res;
	return 0;
}
