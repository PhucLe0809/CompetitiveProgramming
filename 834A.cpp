#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    char a, b; cin >> a >> b;
    int n; cin >> n;
    string x = "^>v<";
    string y = "^<v>";
    bool cw = false;
    bool ccw = false;
    int m;
    {
        m = n;
        for (int i = 0; i < x.size(); i++){
            if (a==x[i]){
                m += i; break;
            }
        }
        if (b==x[m%4]) cw = true;
    }
    {
        m = n;
        for (int i = 0; i < y.size(); i++){
            if (a==y[i]){
                m += i; break;
            }
        }
        if (b==y[m%4]) ccw = true;
    }
    if ((cw && ccw) || (!cw && !ccw)) cout << "undefined";
    else if (cw) cout << "cw"; else cout << "ccw";
    return 0;
}