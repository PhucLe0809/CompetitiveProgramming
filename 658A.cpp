#include <bits/stdc++.h>

using namespace std; 
int32_t p[105], t[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, c; cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> t[i];
    int32_t time;
    int32_t limak = 0;
    time = 0;
    for (int i = 0; i < n; i++){
        time += t[i];
        limak += max(p[i]-c*time, 0);
    }
    int32_t rade = 0;
    time = 0;
    for (int i = n-1; i > -1; i--){
        time += t[i];
        rade += max(p[i]-c*time, 0);
    }
    if (limak > rade) cout << "Limak\n";
    else if (limak < rade) cout << "Radewoosh\n";
        else cout << "Tie\n";
    return 0;
}