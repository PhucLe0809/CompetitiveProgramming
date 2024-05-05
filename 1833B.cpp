#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t temp[maxarray], out[maxarray];
pair <int32_t, int32_t> inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k;
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < n; i++){
            cin >> inp[i].first;
            inp[i].second = i;
        }
        for (int i = 0; i < n; i++) cin >> temp[i];
        sort(inp, inp+n);
        sort(temp, temp+n);
        for (int i = 0; i < n; i++) out[inp[i].second] = temp[i];
        for (int i = 0; i < n; i++) cout << out[i] << " ";
        cout << '\n';
    }
    return 0;
}