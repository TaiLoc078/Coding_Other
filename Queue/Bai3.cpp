#include <bits/stdc++.h>

using namespace std;

int main(){
	queue<string> q;
	q.push("1");
	int n; cin >> n;
	while(n--){
		cout << q.front() << " ";
		q.push(q.front() + "0");
		q.push(q.front() + "1");
		q.pop();
	}
	return 0;
}
