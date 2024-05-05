#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105], c[105], out[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        out[0] = a[0];
        for (int i = 1; i < n-1; i++){
            if (a[i]!=out[i-1]){
                out[i]=a[i]; continue;
            }
            if (b[i]!=out[i-1]){
                out[i]=b[i]; continue;
            }
            if (c[i]!=out[i-1]){
                out[i]=c[i]; continue;
            }
        }
        if (a[n-1]!=out[n-2] && a[n-1]!=out[0]){
                out[n-1]=a[n-1];
        }
        if (b[n-1]!=out[n-2] && b[n-1]!=out[0]){
            out[n-1]=b[n-1];
        }
        if (c[n-1]!=out[n-2] && c[n-1]!=out[0]){
            out[n-1]=c[n-1];
        }    
        for (int i = 0; i < n; i++) cout << out[i] << " ";
        cout << '\n';
    }
    return 0;
}