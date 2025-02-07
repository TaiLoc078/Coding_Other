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
    string ten, ngay_sinh, que_quan;
    double gpa;
    sinhVien(){
        ten = "nguyen van A";
        ngay_sinh = "nn/xx/yyyy";
        que_quan = "abcd";
        gpa = 3.2;
    }
    sinhVien(string name, string ngay, string que, double diem){
        ten = name;
        ngay_sinh = ngay;
        que_quan = que;
        gpa = diem;
    }
};

struct SoPhuc{
    int thuc, ao;
    friend istream &operator >> (istream &in, SoPhuc &x){
        in >> x.thuc >> x.ao;
        return in;
    }
    friend ostream &operator << (ostream &out, SoPhuc x){
        out << x.thuc << "+" << x.ao << "i" << endl;
        return out;
    }
    friend bool operator == (SoPhuc a, SoPhuc b){
        return a.thuc == b.thuc && a.ao == b.ao;
    }
};

//==============================Call================================
void out(sinhVien a);
void in(sinhVien &b);
long long ucln(long long a, long long b);
void xuat(SoPhuc a);
SoPhuc sum_sophuc(SoPhuc a, SoPhuc b);
SoPhuc operator + (SoPhuc a, SoPhuc b);
string tuoi(sinhVien a);
bool cmp(sinhVien a, sinhVien b);


//==============================Code================================
int main(){
    fast();
    // sinhVien x = {"dang loc tai", "20/07/2004", "quang nam", 3.2};
    // sinhVien y;
    // out(x);
    // in(y);
    // out(y);
    // SoPhuc a = {1, 2}, b = {8, 9};
    // SoPhuc c = a + b; //Goi ham bang toan tu cong la mot cach khac
    // cout << c << endl;
    // if(a == b){
    //     cout << "1";
    // }
    // else{
    //     cout << "0";
    // }
    vector<sinhVien> v;
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        sinhVien tmp; in(tmp);
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        out(v[i]);
    }
    return 0;
}

//==============================Function============================
void out(sinhVien a){
    cout << a.ten << ' ' << a.ngay_sinh << ' ' << a.que_quan << ' ' << a.gpa << endl;
}

void in(sinhVien &b){
    getline(cin, b.ten);
    cin >> b.ngay_sinh;
    cin.ignore();
    getline(cin, b.que_quan);
    cin >> b.gpa;
    cin.ignore();
}

void xuat(SoPhuc a){
    cout << a.thuc << "+" << a.ao << "i";
}

SoPhuc sum_sophuc(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

SoPhuc operator + (SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

string tuoi(string s){
    stringstream ss(s);
    string tmp, res = "";
    while(getline(ss, tmp, '/')){
        res = tmp + res;
    }
    return res;
}

bool cmp(sinhVien a, sinhVien b){
    return tuoi(a.ngay_sinh) < tuoi(b.ngay_sinh);
}

long long ucln(long long a, long long b){
    while(b != 0){
        long long du = a % b;
        a = b;
        b = du;
    }
    return a;
}
