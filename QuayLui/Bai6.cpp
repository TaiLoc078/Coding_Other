#include <bits/stdc++.h>

using namespace std;

int n, k, s, res;

void ql(int i, int batdau, int sum){
	for(int j = batdau; j <= n; j++){
		if(sum + j <= s){
			if(i == k){
				if(sum + j == s){
					res++;
				}
			}
			else{
				ql(i + 1, j + 1, sum + j);
			}
		}
	}
}

int main(){
	cin >> n >> k >> s;
	res = 0;
	ql(1, 1, 0);
	cout << res;
	return 0;
}
