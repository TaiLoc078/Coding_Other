#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
int used[1005] = {0};

void BFS(int v){
	queue <int> q;
	q.push(v);
	used[v] = 1;
	while(!q.empty()){
		int tmp = q.front();
		cout << tmp << ' ';
		q.pop();
		for(int x : ke[tmp]){
			if(!used[x]){
				q.push(x);
				used[x] = 1;
			}
		}
	}
	
}

int main(){
	int n, k; cin >> n >> k;
	for(int i = 0; i < k; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
	BFS(1);
	return 0;
}
