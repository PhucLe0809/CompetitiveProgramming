#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    if (n==1){
        cout << 1; return 0;
    }
    vector <int> left(n);
    left[0] = (str[0]=='>')?(0):(1);
    for (int i = 1; i < n; i++){
        if (left[i-1]==0) left[i] = 0;
        else left[i] = (str[i]=='>')?(0):(1);
    }
    vector <int> right(n);
    right[n-1] = (str[n-1]=='<')?(0):(1);
    for (int i = n-2; i >= 0; i--){
        if (right[i+1]==0) right[i] = 0;
        else right[i] = (str[i]=='<')?(0):(1);
    }
    int cnt = 0;
    if (str[0]=='<') cnt++; else cnt += right[1];
    if (str[n-1]=='>') cnt++; else cnt += left[n-2];
    for (int i = 1; i < n-1; i++){
        if (str[i]=='<') cnt += left[i-1];
        else cnt += right[i+1];
    }
    cout << cnt;
    return 0;
}