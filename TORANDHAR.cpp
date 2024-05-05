#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
ifstream finp ("input.txt");
ofstream fout ("output.txt");
int a, b, c;

int f(int x){
    return (a * x + x % b) % c;
}
void calc(int t){
    int mju = 1;
    int a = t, b = t;
    while (f(a) != b){
        a = f(a);
        mju++;
    }
    int lamda = 0, len = mju; a = b = 1;
    while (len--) b = f(b);
    while (a != b){
        a = f(a); b = f(b);
        lamda++;
    }
    fout << mju + lamda << endl;
    exit(0);
}
void GOTOHANOI(){
    finp >> a >> b >> c;
    int t = 1, h = 1, cnt = 2e7;
    while (cnt){
        t = f(t);
        h = f(f(h));
        if (t == h) calc(t);
        cnt--;
    }
    fout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    finp.close(); fout.close();
    return 0;
}