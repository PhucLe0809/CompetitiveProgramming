#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
int32_t inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, res, i, j;
    int64_t red, blue;
    bool check;
    while (test--){
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        red = inp[n-1]; blue = inp[0]+inp[1];
        i = 1; j = n-1; check = false;
        while (i<=j && !check){
            if (red > blue) check = true;
            else{
                red += inp[--j];
                blue += inp[++i];
            }
            //cout << red << " " << blue << '\n';
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}