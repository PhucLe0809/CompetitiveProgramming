#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, temp, cnt;
    while (test--){
        cin >> n >> x;
        unordered_set <int32_t> st;
        for (int i = 0; i < n; i++){
            cin >> temp; st.insert(temp);
        }
        cnt = 0;
        for (int i = 1; ;i++, cnt++){
            if (!st.count(i)){
                if (x) x--;
                else break;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}