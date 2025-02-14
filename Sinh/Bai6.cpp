#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	for(int i = 0; i < pow(2, n); i++){
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		cout << endl;
	}
	return 0;
}
