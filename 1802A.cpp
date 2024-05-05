#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, like, hate;
    while (test--){
        cin >> n;
        like = hate = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x>0) like++;
            else hate++;
        }
        for (int i = 1; i <= like; i++) cout << i << " ";
        for (int i = like-1; i >= like-hate; i--) cout << i << " ";
        cout << '\n';
        for (int i = 1; i <= min(like, hate); i++) cout << "1 0 ";
        for (int i = 0; i < max(like, hate)-min(like, hate); i++) cout << i+1 << " ";
        cout << '\n';
    }
    return 0;
}