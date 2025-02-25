#include <bits/stdc++.h>

using namespace std;

vector<long long> ve;

void xuLy(){
	queue<long long> q;
	q.push(1);
	while(true){
		long long tmp = q.front(); q.pop();
		ve.push_back(tmp);
		if(tmp > 1e18){
			break;
		}
		q.push(tmp * 10);
		q.push(tmp * 10 + 1);
	}
}

void solve(){
	long long s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < ve.size(); i++){
		if(ve[i] <= s){
			cnt++;
		}
	}
	cout << cnt;
}

int main(){
	xuLy();
	int n; cin >> n;
	while(n--){
		solve();
		cout << endl;
	}
	return 0;
}
