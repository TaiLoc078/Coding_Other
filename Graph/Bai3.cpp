#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
int a[1005][1005];
int used[1005] = {0};
int n, k;

void DFS1(int v){
	cout << v << ' ';
	used[v] = 1;
	for(int i = 0; i < ke[v].size(); i++){
		if(!used[ke[v][i]]){
			DFS1(ke[v][i]);
		}
	}
}

void DFS2(int v){
	cout << v << ' ';
	used[v] = 1;
	for(int i = 1; i <= n; i++){
		if(a[v][i] == 1 && !used[i]){
			DFS2(i);
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < k; i++){
		int x, y; cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
	DFS2(1);
	return 0;
}

