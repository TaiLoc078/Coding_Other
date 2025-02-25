#include <bits/stdc++.h>

using namespace std;

vector<string> ve;
void xuLy(){
	queue<string> q;
	q.push("6"); q.push("8");
	while(true){
		string tmp = q.front(); q.pop();
		ve.push_back(tmp);
		if(tmp.length() > 19){
			break;
		}
		q.push(tmp + "6");
		q.push(tmp + "8");
	}
}

void solve(){
	int s; cin >> s;
	stack<string> st;
	for(int i = 0; i < ve.size(); i++){
		if(ve[i].length() > s){
			break;
		}
		st.push(ve[i]);
	}
	while(!st.empty()){
		cout << st.top() << ' ';
		st.pop();
	}
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
