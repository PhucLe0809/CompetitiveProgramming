#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, k, d; 
    while (test--){
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> inp[i];
        for (int i = 1; i <= 2-(k%2); i++){
            d = *max_element(inp, inp+n);
            for (int i = 0; i < n; i++){
                inp[i] = d-inp[i];
                //cout << inp[i] << " ";
            }
        }
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}