#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int64_t inp[maxarray], out[maxarray]; // scan[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    // scan[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i];
        // scan[i] = scan[i-1]+inp[i];
    }
    int64_t infront = 0;
    for (int i = 1; i <= n; i++){
        infront += inp[i];
        if (infront < m) out[i] = 0;
        else{
            out[i] = infront/m;
            infront -= (infront/m)*m;
        }
    }
    for (int i = 1; i <= n; i++) cout << out[i] << " ";
    return 0;
}