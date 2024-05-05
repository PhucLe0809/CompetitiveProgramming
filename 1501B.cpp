#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray], cake[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, layer;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> inp[i];
        layer = 0;
        fill(cake+1, cake+n+1, 0);
        for (int i = n; i >= 1; i--){
            layer=max(layer, inp[i]);
            if (layer>0) cake[i] = 1;
            layer--;
        }
        for (int i = 1; i <= n; i++) cout << cake[i] << " ";
        cout << '\n';
    }
    return 0;
}