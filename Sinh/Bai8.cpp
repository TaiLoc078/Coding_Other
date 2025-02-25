#include <bits/stdc++.h>

using namespace std;

int n, k, tmp, a[100];

void khoiTao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

bool check1(){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1){
			cnt += 1;
		}
	}
	return cnt == k;
}

bool check2(){
	int cnt = 0;
	int dem = 0;
	for(int i = 1; i <= n ; i++){
		if(a[i] == 1){
			cnt += 1;
		}
		else{
			if(cnt > k){
				return false;
			}
			else if(cnt == k){
				dem += 1;
			}
			cnt = 0;
		}
	}
	if(cnt > k){
		return false;
	}
	else if(cnt == k){
		dem += 1;
	}
	return dem == 1;
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
	cin >> n >> k;
	khoiTao();
	tmp = 1;
	while(tmp){
		if(check1()){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << ' ';
		}
		sinh();
	}
	tmp = 1;
	cout << endl;
	khoiTao();
	while(tmp){
		if(check2()){
			for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << ' ';
		}
		sinh();
	}
	return 0;
}
