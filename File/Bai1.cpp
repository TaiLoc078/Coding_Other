#include <bits/stdc++.h>

using namespace std;

/*
Mot so mode:
ios::in : doc file
ios::out : ghi file
ios::binary : mo kieu nhi phan
ios::app : mo file len de ghi nhung ma ghi vao cuoi file
ios::ate : dat vi tri cua con tro file vao cuoi file, neu ma mode
khong duoc bat thi vi tri con tro se la dau file
ios::trunc : mo file de doc
nhung noi dung truoc do trong file se bi mat het truoc ghi noi dung moi
*/

int main(){
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt", ios::out | ios::app);
	int n; in >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		in >> a[i];
	}
	for(int x : a){
		cout << x << ' ';
		out << x << ' ';
	}
	in.close();
	out.close();
	return 0;
}

