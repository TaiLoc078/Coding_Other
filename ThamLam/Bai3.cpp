#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	long long sum1, sum2;
	sum1 = 0; sum2 = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(k < n / 2){
		sort(a, a + n);
		for(int i = 0; i < k; i++){
			sum1 += a[i];
		}
		for(int i = k; i < n; i++){
			sum2 += a[i];
		}
		cout << sum2 - sum1;
	}
	else{
		sort(a, a + n, greater<long long>());
		for(int i = 0; i < k; i++){
			sum1 += a[i];
		}
		for(int i = k; i < n; i++){
			sum2 += a[i];
		}
		cout << sum1 - sum2;
	}
	return 0;
}
