#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t score[maxarray];
char inp[maxarray][maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> inp[i][j];
        }
    }
    for (int i = 0; i < m; i++) cin >> score[i];
    int32_t s, tmp;
    s = 0;
    for (int j = 0; j < m; j++){
        map <char, int> mp;
        for (int i = 0; i < n; i++){
            mp[inp[i][j]]++;
        }
        tmp = 0;
        for (auto x:mp){
            tmp = max(tmp, x.second);
        }
        s += tmp*score[j];
    }
    cout << s;
    return 0;
}