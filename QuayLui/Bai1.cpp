#include <bits/stdc++.h>

using namespace std;

int n, a[100], used[100] = {0};

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
}

void ql(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == false){
			a[i] = j;
			used[j] = true;
			if(i == n){
				in();
			}
			else{
				ql(i + 1);
			}
			used[j] = false;
		}
	}
}

int main(){
	cin >> n;
	ql(1);
	return 0;
}
