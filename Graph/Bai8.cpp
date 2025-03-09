#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1005];
int n, k;
int used[1005] = {0};

void BFS(int v){
	queue <int> q;
	q.push(v);
	used[v] = 1;
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		for(int x : ke[tmp]){
			if(!used[x]){
				q.push(x);
				used[x] = 1;
			}
		}
	}
}

int tplt(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!used[i]){
			dem++;
			BFS(i);
		}
	}
	return dem;
}

void check_dinhtru(){
	int tmp = tplt();
	for(int i = 1; i <= n; i++){
		memset(used, false, sizeof(used));
		used[i] = 1;
		if(tplt() > tmp){
			cout << i << ' ';
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < k; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	check_dinhtru();
	return 0;
}
