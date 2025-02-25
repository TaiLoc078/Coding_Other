#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[100];
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
	int tmp = 1;
	while(tmp){
		for(int i = 1; i <= n; i++){
			if(a[i] == 0){
				cout << "B";
			}
			else{
				cout << "A";
			}
		}
		cout << endl;
		int j = n;
		while(j >= 1 && a[j] == 1){
			a[j] = 0;
			j--;
		}
		if(j == 0){
			tmp = 0;
		}
		else{
			a[j] = 1;
		}
	}
	return 0;
}
