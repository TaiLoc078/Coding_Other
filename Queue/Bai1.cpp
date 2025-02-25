#include <bits/stdc++.h>

using namespace std;

int main(){
	queue<int> qe;
	int n; cin >> n;
	while(n--){
		int tmp; cin >> tmp;
		if(tmp == 1){
			cout << qe.size() << endl;
		}
		else if(tmp == 2){
			if(qe.empty()){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else if(tmp == 3){
			int tmp1; cin >> tmp1;
			qe.push(tmp1);
		}
		else if(tmp == 4){
			if(qe.empty()){
			}
			else{
				qe.pop();
			}
		}
		else if(tmp == 5){
			if(qe.empty()){
				cout << -1;
			}
			else{
				cout << qe.front();
			}
		}
		else{
			if(qe.empty()){
				cout << -1;
			}
			else{
				cout << qe.back();
			}
		}
	}
	return 0;
}
