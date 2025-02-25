#include <bits/stdc++.h>

using namespace std;

int used[20005] = {0};
int solve(){
	int s, t; cin >> s >> t;
	queue< pair<int, int> > q;
	q.push({s, 0});
	while(true){
		auto tmp = q.front(); q.pop();
		int val = tmp.first; int cnt = tmp.second;
		if(val == t){
			return cnt;
		}
		if(val < 10000 && !used[val * 2]){
			used[val * 2] = 1;
			q.push({val * 2, cnt + 1});
		}
		if(val - 1 > 0 && !used[val - 1]){
			used[val - 1] = 1;
			q.push({val - 1, cnt + 1});
		}
	}
}

int main(){
	int n; cin >> n;
	while(n--){
		cout << solve();
		cout << endl;
	}
	return 0;
}
