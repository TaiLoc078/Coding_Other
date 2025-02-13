#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[] = {5, 4, 3, 2, 1};
	do{
		for(int i = 0; i < 5; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}while(prev_permutation(a, a + 5));
	return 0;
}
