#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x; cin >> n >> x;
    vector <int> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i];
    }
    sort(inp.begin(), inp.end());
    // for (auto &it:inp) cout << it << " ";
    int mex = -1;
    for (int i = 0; i < n; i++){
        mex++;
        if (inp[i]-mex!=0) break;
    }
    if (mex==inp[n-1]) mex++;
    if (mex==x) cout << 0;
    else{
        int i, cnt; cnt = 0;
        for (i = mex; inp[i] < x && i<n; i++) cnt++;
        if (x<mex) cout << 1;
        else cout << (x-mex) - cnt + (inp[i]==x);
    }
    return 0;
}