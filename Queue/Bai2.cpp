#include <bits/stdc++.h>

using namespace std;

int main(){
	deque<int> q;
	int t; cin >> t;
	while(t--){
		string s; int n;
		cin >> s;
		if(s == "PUSHBACK"){
			cin >> n;
			q.push_back(n);
		}
		else if(s == "PUSHFRONT"){
			cin >> n;
			q.push_front(n);
		}
		else if(s == "PRINTBACK"){
			if(!s.empty()){
				cout << q.back();
			}
			else{
				cout << "NONE";
				cout << endl;
			}
		}
		else if(s == "PRINTFRONT"){
			if(!q.empty()){
				cout << q.front() << endl;
			}
			else{
				cout << "NONE" << endl;
			}
		}
		else if(s == "POPBACK"){
			if(!q.empty()){
				q.pop_back();
			}
		}
		else if(s == "POPFRONT"){
			if(!q.empty()){
				q.pop_front();
			}
		}
	}
	return 0;
}
