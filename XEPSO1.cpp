#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 39

using namespace std;
vector <int> bit(40);
vector <int> digit[10];

void update(int &len, int &minn, int &maxx){
    int a = 0;
    for (int i = 1; i <= len; i++){
        if (i == 1 && bit[i] == 6) a = a*10 + digit[bit[i]][1];
        else a = a*10 + digit[bit[i]][0];
    }
    int b = 0;
    for (int i = 1; i <= len; i++) b = b*10 + digit[bit[i]].back();
    minn = min(minn, a);
    maxx = max(maxx, b);
}
void gen(int &sdigit, int &len, int k, int &sum, int &minn, int &maxx){
    if (k > len) return;
    for (int i = 2; i <= 7; i++){
        if (sum + i > sdigit) return;
        bit[k] = i; sum += i;
        if (sum == sdigit){
            update(k, minn, maxx);
        }
        else gen(sdigit, len, k+1, sum, minn, maxx);
        sum -= i;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    digit[2] = {1};
    digit[3] = {7};
    digit[4] = {4};
    digit[5] = {2, 3, 5};
    digit[6] = {0, 6, 9};
    digit[7] = {8};
    while (test--){
        int n; cin >> n;
        int len, sum, minn, maxx;
        len = n/7 + (n%7 != 0); sum = 0; minn = LONG_MAX; maxx = LONG_MIN;
        gen(n, len, 1, sum, minn, maxx);
        cout << minn << " ";
        len = n/2 + (n%2 != 0); sum = 0; minn = LONG_MAX; maxx = LONG_MIN;
        gen(n, len, 1, sum, minn, maxx);
        cout << maxx << endl;
    }
    return 0;
}