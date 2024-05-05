#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
bool eratos[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; getline(cin, str);
    fill(eratos, eratos + maxarray, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i * i <= maxarray; i++){
        for (int j = i * i; j <= maxarray; j += i) eratos[j] = false;
    }
    for (int i = 0; i < str.size(); i++){
        if (eratos[i]) str[i] = '*';
    }
    cout << str;
    return 0;
}