#include <bits/stdc++.h>

using namespace std; 
pair <int32_t, bool> inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> inp[i].first;
        inp[i].second = true;
    }
    sort(inp, inp+n);
    int32_t cnt = 0;
    for (int i = 0; i < n; i++){
        if (inp[i].second){
            inp[i].second = false; cnt++;
            for (int j = i+1; j < n; j++){
                if (inp[j].first%inp[i].first==0)
                    inp[j].second = false;
            }
        }
    }
    cout << cnt;
    return 0;
}