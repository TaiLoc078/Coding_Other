#include <bits/stdc++.h>

using namespace std;

int n, a[100], b[100], tmp;

void khoiTao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
	for(int i = 1; i <= n; i++){
		cin >> b[i];
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
	tmp = 1;
	sinh();
	long long res = 1e18;
	while(tmp){
		long long sum1 = 0, sum2 = 0;
		for(int i = 1; i <= n; i++){
			if(a[i] == 1){
				sum1 += b[i];
			}
			else{
				sum2 += b[i];
			}
		}
		res = min(res, abs(sum2 - sum1));
		sinh();
	}
	cout << res;
	return 0;
}
