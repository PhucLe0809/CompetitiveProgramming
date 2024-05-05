#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt;
    string str;
    while (test--){
        cin >> n >> str;
        cnt = 0;
        for (int i = 0; i < n; i++){
            if (i-1>=0 && str[i-1]=='0' && str[i]=='0')
                cnt += 2;
            else if (i-1>=0 && i+1<n && str[i-1]=='0' && str[i]=='1' && str[i+1]=='0')
                    cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}