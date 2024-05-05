#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int h = ((str[0]-'0')*10+(str[1]-'0'));
    int m = ((str[3]-'0')*10+(str[4]-'0'));
    int pivot, a, b;
    int res = 0;
    while (true){
        pivot = (h*60+m + res)%(24*60);
        a = pivot/60; b = pivot%60;
        if (a/10==b%10 && a%10==b/10){
            // (a<10)?(cout << 0 << a):(cout << a);
            // cout << ":";
            // (b<10)?(cout << 0 << b):(cout << b);
            break;
        }else res++;
    }
    cout << res;
    return 0;
}