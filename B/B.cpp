#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

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

int main(){
    fast();
    int n;
    cin >> n;
    int a[n];
    ifor(i, 0, n - 1) cin >> a[i];
    int res = 0;
    ifor(i, 0, n - 1){
        ifor(j, i, n - 1){
            int sum = 0;
            ifor(k, i, j) sum += a[k];
            res = max(res, sum);
        }
    }
    cout << res;
    return 0;
}