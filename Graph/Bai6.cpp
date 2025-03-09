#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
int used[1005] = {0};

void DFS(int v){
	cout << v << ' ';
	used[v] = 1;
	for(int x : ke[v]){
		if(!used[x]){
			DFS(x);
			used[x] = 1;
		}
	}
}

int main(){
	int n, k, s, t; cin >> n >> k >> s >> t;
	for(int i = 0; i < k; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
	DFS(s);
	cout << endl;
	if(used[t]){
		cout << "YES";
	}
	return 0;
}
