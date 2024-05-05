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
    int32_t s1, t1, s2, t2, s3, t3, s4, t4;
    s1 = min(a, x); t1 = min(b, d);
    s2 = min(a, x); t2 = max(y, t);
    s3 = max(c, z); t3 = min(b, d);
    s4 = max(c, z); t4 = max(y, t);
    if (inp[s1][t1]=='.') cout << s1+1 << " " << t1+1;
    if (inp[s2][t2]=='.') cout << s2+1 << " " << t2+1;
    if (inp[s3][t3]=='.') cout << s3+1 << " " << t3+1;
    if (inp[s4][t4]=='.') cout << s4+1 << " " << t4+1;
    // cout << s1+1 << " " << t1+1;
    // cout << s2+1 << " " << t2+1;
    // cout << s3+1 << " " << t3+1;
    // cout << s4+1 << " " << t4+1;
    return 0;
}