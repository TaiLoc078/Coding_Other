#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<long long> ve;
	queue<long long> q;
	q.push(8);
	while(true){
		long long tmp = q.front(); q.pop();
		if(tmp > 1e18){
			break;
		}
		ve.push_back(tmp);
		q.push(tmp * 10);
		q.push(tmp * 10 + 8);
	}
	int n; cin >> n;
	for(int i = 0; i < ve.size(); i++){
		if(ve[i] % n == 0){
			cout << ve[i];
			break;
		}
	}
	return 0;
}
