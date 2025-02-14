#include <bits/stdc++.h>

using namespace std;

int n, tmp, a[100], dem;

void khoiTao(){
	a[1] = n;
	dem = 1;
}

void sinh(){
	int i = dem;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		tmp = 0;
	}
	else{
		a[i]--;
		int thieu = dem - i + 1;
		dem = i;
		int q = thieu / a[i], r = thieu % a[i];
		if(q != 0){
			for(int j = 1; j <= q; j++){
				a[++dem] = a[i];
			}
		}
		if(r != 0){
			a[++dem] = r;
		}
	}
}

int main(){
	cin >> n;
	tmp = 1;
	khoiTao();
	sinh();
	while(tmp){
		for(int i = 1; i <= dem; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}
