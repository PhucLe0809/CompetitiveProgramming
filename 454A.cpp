#include <bits/stdc++.h>

using namespace std; 
char tick[105][105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++){
        fill(tick[i], tick[i]+n, '*');
    }
    for (int i = 0; i < n/2+1; i++){
        for (int j = n/2-i; j < n-n/2+i; j++)
            tick[i][j] = 'D';
    }
    for (int i = n/2+1; i < n; i++){
        for (int j = i-n/2; j < n+n/2-i; j++)
            tick[i][j] = 'D';
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << tick[i][j];
        cout << '\n';
    }
    return 0;
}