#include <bits/stdc++.h>

using namespace std;

int main(){
	string tmp; cin >> tmp;
	stack<char> st;
	for(char x : tmp){
		if(x == '('){
			st.push(x);
		}
		else{
			if(st.empty()){
				cout << "NO\n"; return 0;
			}
			st.pop();
		}
	}
	if(st.empty()){
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}

