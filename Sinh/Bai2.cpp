#include <bits/stdc++.h>

using namespace std;

int n, k, a[100], tmp;

void khoiTao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		tmp = 0;
	}
	else{
		a[i] += 1;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main(){
	tmp = 1;
	cin >> n >> k;
	khoiTao();
	while(tmp){
		for(int i = 1; i <= k; i++){
			cout << a[i] <<  ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
