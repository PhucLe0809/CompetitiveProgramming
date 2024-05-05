#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t minn = min_element(inp, inp+n)-inp;
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        if (inp[i] == inp[minn]) cnt++;
    }
    if (cnt==1) cout << minn+1;
    else cout << "Still Rozdil";
    return 0;
}