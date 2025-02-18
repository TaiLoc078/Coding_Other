#include <bits/stdc++.h>

using namespace std;

int n, k, a[100], x[100];
//10 26
//12 11 9 10 6 8 14 7 5 13

void ql2(int i, int sum){
	for(int j = x[i - 1] + 1; j <= n; j++){
		if(sum + a[j] <= k){
			x[i] = j;
			if(sum + a[j] == k){
				for(int u = 1; u <= i; u++){
					cout << a[x[u]] << ' ';
				}
				cout << endl;
			}
			else{
				ql2(i + 1, sum + a[j]);
			}
		}
	}
}

void ql(int i, int batdau, int sum){
	for(int j = batdau; j <= n; j++){
		if(sum + a[j] <= k){
			x[i] = a[j];
			if(sum + a[j] == k){
				for(int u = 1; u <= i; u++){
					cout << x[u] << ' ';
				}
				cout << endl;
			}
			else if(sum + a[j] < k){
				ql(i + 1, j + 1, sum + a[j]);
			}
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
	cout << endl;
	ql(1,1,0);
	cout << endl;
	ql2(1,0);
	return 0;
}
