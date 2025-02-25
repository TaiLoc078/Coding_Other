#include <bits/stdc++.h>

using namespace std;

int tong, n, k, save, a[101];
bool used[101];

void ql(int i, int batdau, int cnt, int sum){
	if(save){
		return;
	}
	if(cnt == k && sum == 0){
		save = 1;
		return;
	}
	for(int j = batdau; j <= n; j++){
		if(sum + a[j] <= tong && !used[j]){
			used[j] = true;
			if(sum + a[j] == tong){
				ql(i+1, 1, cnt + 1, 0);
			}
			else{
				ql(i + 1, j + 1, cnt, sum + a[j]);
			}
			used[j] = false;
		}
	}
}

int main(){
	cin >> n >> k;
	int tmp = n;
	tong = 0;
	for(int i = 1; i <= tmp; i++){
		cin >> a[i];
		tong += a[i];
	}
	if(tong % k != 0){
		cout << -1;
	}
	else{
		tong /= k;
		ql(1, 1, 0, 0);
		cout << save;
	}
	return 0;
}
