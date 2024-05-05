#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 1000005

using namespace std;
int inext[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string t, s; cin >> t >> s;
    inext[0] = -1LL;
    for(int i = 1; s[i]; i++){
        int j = inext[i-1];
        while (j >= 0 && s[j+1] != s[i]) j = inext[j];
        if (s[j+1] == s[i]) j++;
        inext[i] = j;
    }
    for(int i = 0, j = -1; t[i]; i++){
        while (j >= 0 && t[i] != s[j+1]) j = inext[j];
        if (t[i] == s[j+1]) ++j;
        if (s[j+1] == 0){
            cout << i - j + 1 << " ";
            j = inext[j];
        }
    }
    return 0;
}