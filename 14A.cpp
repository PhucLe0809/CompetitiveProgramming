#include <bits/stdc++.h>

using namespace std; 
char inp[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) cin >> inp[i][j];
    }
    int32_t a, b; a = b = -1;
    for (int i = 0; i<n && a==-1; i++){
        for (int j = 0; j<m && a==-1; j++){
            if (inp[i][j]!='.'){
                a = i; b = j;
            }
        }
    }
    int32_t c, d; c = d = -1;
    for (int i = n-1; i>-1 && c==-1; i--){
        for (int j = 0; j<m && c==-1; j++){
            if (inp[i][j]!='.'){
                c = i; d = j;
            }
        }
    }
    int32_t x, y; x = y = -1;
    for (int i = 0; i<n && x==-1; i++){
        for (int j = m-1; j>-1 && x==-1; j--){
            if (inp[i][j]!='.'){
                x = i; y = j;
            }
        }
    }
    int32_t z, t; z = t = -1;
    for (int i = n-1; i>-1 && z==-1; i--){
        for (int j = m-1; j>-1 && z==-1; j--){
            if (inp[i][j]!='.'){
                z = i; t = j;
            }
        }
    }
    int32_t e, f; e = f = -1;
    for (int j = 0; j<m && e==-1; j++){
        for (int i = 0; i<n && e==-1; i++){
            if (inp[i][j]!='.'){
                e = i; f = j;
            }
        }
    }
    int32_t g, h; g = h = -1;
    for (int j = 0; j<m && g==-1; j++){
        for (int i = n-1; i>-1 && g==-1; i--){
            if (inp[i][j]!='.'){
                g = i; h = j;
            }
        }
    }
    int32_t p, q; p = q = -1;
    for (int j = m-1; j>-1 && p==-1; j--){
        for (int i = 0; i<n && p==-1; i++){
            if (inp[i][j]!='.'){
                p = i; q = j;
            }
        }
    }
    int32_t u, v; u = v = -1;
    for (int j = m-1; j>-1 && u==-1; j--){
        for (int i = n-1; i>-1 && u==-1; i--){
            if (inp[i][j]!='.'){
                u = i; v = j;
            }
        }
    }
    int32_t s1, t1, s2, t2;
    s1 = min(a, x); t1 = min(f, h);
    s2 = max(c, z); t2 = max(q, v);
    for (int i = s1; i <= s2; i++){
        for (int j = t1; j <= t2; j++) cout << inp[i][j];
        cout << '\n';
    }
    return 0;
}