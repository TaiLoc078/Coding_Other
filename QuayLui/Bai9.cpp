#include <bits/stdc++.h>

using namespace std;

int n, res, c[15] = {0}, d1[15] = {0}, d2[15] = {0}, a[15], kq[15][15];

void inkq(){
	for(int i = 1; i <= n; i++){
		kq[i][a[i]] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << kq[i][j] << ' ';
		}
		cout << endl;
	}
}

void ql(int i){
	for(int j = 1; j <= n; j++){
		if(!c[j] && !d1[i - j + n] && !d2[i - j + 1]){
			c[j] = d1[i - j + n] = d2[i - j + 1] = 1;
			a[i] = j;
			if(i == n){
				res++;
				inkq();
				cout << endl << endl;
			}
			else{
				ql(i + 1);
			}
			c[j] = d1[i - j + n] = d2[i - j + 1] = 0;
		}
	}
}

int main(){
	cin >> n;
	res = 0;
	ql(1);
	cout << res;
	return 0;
}
