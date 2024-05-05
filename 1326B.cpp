#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> inp[i];
    int32_t maxx = inp[0];
    cout << inp[0] << " ";
    for (int i = 1; i < n; i++){
        cout << inp[i]+maxx << " ";
        maxx = max(maxx, inp[i]+maxx);
    }
    return 0;
}