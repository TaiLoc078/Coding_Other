#include <bits/stdc++.h>

using namespace std;

int n, a[100], tmp = 1;

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
	while(tmp){
		for(int i = 1; i <= n; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
