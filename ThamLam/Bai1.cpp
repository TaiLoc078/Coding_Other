#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int cnt = 0;
	int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	for(int i = 0; i < 10; i++){
		cnt += (n / a[i]);
		n %= a[i];
	}
	cout << cnt;
	return 0;
}
