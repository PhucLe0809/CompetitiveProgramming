#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, q; cin >> n >> q;
    int32_t cnt1, cnt0;
    cnt0 = cnt1 = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        if (inp[i]) cnt1++;
        else cnt0++;
    }
    int32_t type, id;
    while (q--){
        cin >> type >> id;
        if (type==1){
            inp[id] = 1-inp[id];
            if (inp[id]){
                cnt1++; cnt0--;
            } else{
                cnt0++; cnt1--;
            }
        }else{
            if (id<=cnt1) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
    return 0;
}