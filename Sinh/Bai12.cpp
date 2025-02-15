#include <bits/stdc++.h>

using namespace std;

int n, a[100], b[100], tmp;

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
	tmp = 1;
	while(tmp){
		int cnt1 = 0, cnt2 = 0;
		if(a[1] == 1 && a[n] == 0){
			for(int i = 1; i <= n; i++){
				if(a[i]){
					cnt1++;
					if(cnt2 > 3){
						cnt1 = -1;
						break;
					}
					cnt2 = 0;
				}
				else{
					cnt2++;
					if(cnt1 >= 2){
						cnt2 = -1;
						break;
					}
					cnt1 = 0;
				}
			}
			if(cnt2 > 3){
				cnt1 = -1;
			}
			if(cnt1 >= 2){
				cnt2 = -1;
			}
			if(cnt1 == -1 || cnt2 == -1){
			}
			else{
				for(int i = 1; i <= n; i++){
					if(a[i]){
						cout << 8;
					}
					else{
						cout << 6;
					}
				}
				cout << endl;
			}
		}
		sinh();
	}
	return 0;
}
