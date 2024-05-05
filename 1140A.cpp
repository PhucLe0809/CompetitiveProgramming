#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n+1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int day, t; day = 0; t = 1;
    int maxx = inp[1];
    while (t<=n){
        while (t<maxx){
            t++;
            maxx = max(maxx, inp[t]);
        }
        day++; t++; maxx = inp[t];
    }
    cout << day;
    return 0;
}