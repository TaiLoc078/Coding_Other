#include <bits/stdc++.h>

using namespace std;

int n, a[10][10], check;

int dx[] = {0, -1, 1, 0};
int dy[] = {1, 0, 0, -1};

string xuly(int k){
	if(k == 0){
		return "D";	
	}
	else if(k == 1){
		return "L";
	}
	else if(k == 2){
		return "R";
	}
	else{
		return "U";
	}
}

void ql(int i, int j, string tmp){
	if(i == n && j == n){
		check = 1;
		cout << tmp << endl;
		return;
	}
	for(int k = 0; k < 4; k++){
		int i1 = i + dy[k], j1 = j + dx[k];
		if(i1 <= n && i1 > 0 && a[i1][j1] == 1 && j1 > 0 && j1 <= n){
			a[i1][j1] = 0;
			ql(i1, j1, tmp + xuly(k));
			a[i1][j1] = 1;
		}
	}
}

int main(){
	check = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	a[1][1] = 0;
	ql(1, 1, "");
	if(check == 0){
		cout << -1;
	}
	return 0;
}
