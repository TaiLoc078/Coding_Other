#include <bits/stdc++.h>

using namespace std;

int n, a[100], tmp;
string b[100];

void khoiTao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0){
		tmp = 0;
	}
	else{
		for(int j = n; j > i; j--){
			if(a[j] > a[i]){
				swap(a[i], a[j]);
				break;
			}
		}
		reverse(a + i + 1, a + n + 1);
	}
}

int main(){
	cin >> n;
	khoiTao();
	tmp = 1;
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	while(tmp){
		for(int i = 1; i <= n; i++){
			cout << b[a[i]] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
