#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    int64_t cnt1, cnt0, len1, len0, cnt;
    string str;
    while (test--){
        cin >> n >> str;
        if (n==1){
            cout << 1 << '\n'; continue;
        }
        cnt1 = cnt0 = 0;
        if (str[0]=='0') cnt0++;
        else cnt1++;
        len1 = len0 = cnt = 1;
        for (int i = 1; i < n; i++){
            if (str[i]=='0') cnt0++;
            else cnt1++;
            if (str[i]==str[i-1]) cnt++;
            else{
                if (str[i-1]=='0') len0 = max(len0, cnt);
                else len1= max(len1, cnt);
                cnt = 1;
            }
        }
        if (str[n-1]=='0' && str[n-2]=='0') len0 = max(len0, cnt);
        if (str[n-1]=='1' && str[n-2]=='1') len1 = max(len1, cnt);
        cout << max({len0*len0, len1*len1, cnt0*cnt1}) << '\n';
    }
    return 0;
}