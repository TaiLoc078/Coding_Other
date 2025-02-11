//==============================Lib=================================
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <sstream>


using namespace std;

//==============================Define==============================
#define fast() std::ios::sync_with_stdio(false)
#define ifor(i, a, b) for(int i = a; i <= b; i++)
#define dfor(i, a, b) for(int i = a; i >= b; i--)
#define INF 1e9 + 2804
#define all(a) a.begin(), a.end()
#define sz(a) int((a).size())
#define fi first
#define se second
#define mp make_pair
#define pb push_back


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;
//==============================Data_Type===========================
struct sinhVien{
	string ten, ns;
	double toan, ly, hoa;
	friend istream &operator >> (istream &cin, sinhVien &x){
		getline(cin, x.ten);
		cin >> x.ns >> x.toan >> x.ly >> x.hoa;
		cin.ignore();
		return cin;
	}
	friend ostream &operator << (ostream &cout, sinhVien x){
		cout << x.ten << ' ' << x.ns << ' ' << fixed << setprecision(1) << x.toan + x.ly + x.hoa;
		return cout;
	}
};

//==============================Call================================


//==============================Code================================
int main(){
	sinhVien x;
	cin >> x;
	cout << x;
    return 0;
}

//==============================Function============================

