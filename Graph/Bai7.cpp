#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
int used[1005] = {0};
int parent[1005];

void DFS(int v){
	used[v] = 1;
	for(int x : ke[v]){
		if(!used[x]){
			parent[x] = v;
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
	if(used[t]){
		vector<int> ve;
		while(t != s){
			ve.push_back(t);
			t = parent[t];
		}
		ve.push_back(s);
		reverse(ve.begin(), ve.end());
		for(int x : ve){
			cout << x << ' ';
		}
	}
	else{
		cout << -1;
	}
	return 0;
}
