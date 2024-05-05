#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
string inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t cnt = 0;
    for (int i = 0; i < inp[0].size(); i++){
        set <char> st;
        for (int j = 0; j < n; j++) st.insert(inp[j][i]);
        if (st.size()==1) cnt++;
        else break;
    }
    cout << cnt;
    return 0;
}