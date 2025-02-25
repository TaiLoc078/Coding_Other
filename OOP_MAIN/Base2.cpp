#include <bits/stdc++.h>

using namespace std;

class hinh{
	protected:
		long long a, b;
	public:
		void nhap(long long a, long long b){
			this->a = a;
			this->b = b;
		}
		virtual void dien_tich(){
			
		}
};

class hinh_cn : public hinh{
	public:
		void dien_tich(){
			cout << a * b;
			cout << endl;
		}
};

int main(){
	hinh_cn x;
	hinh *ptr = &x;
	ptr->nhap(3, 4);
	ptr->dien_tich();
	return 0;
}

