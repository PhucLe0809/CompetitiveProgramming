#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 300005

using namespace std;
bool eratos[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    fill(eratos, eratos + maxarray, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i*i < maxarray; i++){
        for (int j = i*i; j < maxarray; j += i){
            eratos[j] = false;
        }
    }
    vector <int> scan;
    for (int i = 2; i <= n; i++){
        if (eratos[i]) scan.push_back(i);
    }
    vector <pair<int, int>> out;
    int i = 0, j = scan.size() - 1;
    while (i < j){
        if (scan[i] + scan[j] == n){
            out.push_back({scan[i], scan[j]});
            i++; j--;
        }else{
            if (scan[i] + scan[j] > n) j--;
            else i++;
        }
    }
    cout << out.size() << endl;
    for (auto &it:out) cout << it.first << " " << it.second << endl;
    return 0;
}