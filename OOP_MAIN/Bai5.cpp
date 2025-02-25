#include <bits/stdc++.h>

using namespace std;

class sv{ // Tat ca da duoc nap chong vao class
	private:
		string ten;
	public:
		friend void nhap(sv &x){
			cin >> x.ten; //ham friend giup lien ket ham nay (ham ben ngoai long vao trong) voi class
		}
		friend void in(sv x){
			cout << x.ten;
		}
		void out(){
			cout << ten;
		}
};

int main(){
	sv x;
	nhap(x);
	in(x);
	cout << endl;
	x.out();
	return 0;
}
