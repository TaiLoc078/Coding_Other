#include <bits/stdc++.h>

using namespace std;

int n, a[100], tmp;

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
		int j = n;
		for(j; j > i; j--){
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
	while(tmp){
		for(int i = 1; i <= n; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
		sinh();
	}
//	int b[] = {1, 2, 3};
//	while(next_permutation(b, b + 3)){
//		for(int i = 0; i < 3; i++){
//			cout << b[i] << ' ';
//		}
//		cout << endl;
//	}
	return 0;
}
