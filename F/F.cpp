//==============================Lib=================================
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>


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

//==============================Call================================
string dao_nguoc(string a);
string tong(string a, string b);

//==============================Code================================
int main(){
    fast();
    string a, b; cin >> a >> b;
    if(a.length() > b.length() || a.length() == b.length() && a > b){
        cout << tong(a, b);
    }
    else{
        cout << tong(b, a);
    }
    return 0;
}

//==============================Function============================
string dao_nguoc(string a){
    string t;
    for(int i = a.length() - 1; i >= 0; i--){
        t += a[i];
    }
    return t;
}

string tong(string a, string b){
    a = dao_nguoc(a); b = dao_nguoc(b);
    a += "0";
    string c;
    for(int i = b.length(); i < a.length(); i++){
        b += '0';
    }
    int t, nho = 0;
    for(int i = 0; i < a.length(); i++){
        t = a[i] - '0' + b[i] - '0' + nho;
        nho = t / 10;
        t = t  % 10;
        c += (t + '0');
    }
    if(c[c.length() - 1] == '0'){
        c.erase(c.length() - 1);
    }
    c = dao_nguoc(c);
    return c;
}
