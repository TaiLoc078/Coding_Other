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
struct phanSo{
    ll tu, mau;
    friend istream &operator >> (istream &cin, phanSo &x){
        cin >> x.tu >> x.mau;
        return cin;
    }
    friend ostream &operator << (ostream &cout, phanSo x){
        cout << x.tu << '/' << x.mau;
        return cout;
    }
};

//==============================Call================================
ll ucln(phanSo x);


//==============================Code================================
int main(){
    fast();
    phanSo x;
    cin >> x;
    ll common = ucln(x);
    x.tu = x.tu / common; x.mau = x.mau / common;
    cout << x;
}

//==============================Function============================
ll ucln(phanSo x){
    while(x.mau != 0){
        ll du = x.tu % x.mau;
        x.tu = x.mau;
        x.mau = du;
    }
    return x.tu;
}
