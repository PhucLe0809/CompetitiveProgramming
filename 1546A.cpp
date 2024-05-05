#include <bits/stdc++.h>

using namespace std; 
int32_t a[105], b[105];
vector <pair<int32_t, int32_t>> save;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, suma, sumb;
    while (test--){
        cin >> n;
        suma = sumb = 0;
        for (int i = 1; i <= n; i++){
            cin >> a[i]; suma += a[i];
        }
        for (int j = 1; j <= n; j++){
            cin >> b[j]; sumb += b[j];
        }
        if (suma!=sumb){
            cout << -1 << '\n'; continue;
        }
        save.clear();
        for (int i = 1; i <= n; i++){
            if (a[i]<b[i]){
                for (int j = 1; j<=n && a[i]<b[i]; j++){
                    if (a[j]>b[j]){
                        k = min(b[i]-a[i], a[j]-b[j]);
                        for (int t = 1; t <= k; t++){
                            save.push_back({j, i});
                        }
                        a[i] += k; a[j] -= k;
                        //cout << a[i] << " " << a[j] << '\n';
                    }
                }
            }
        }
        cout << save.size() << '\n';
        for (auto it:save){
            cout << it.first << " " << it.second << '\n';
        }
    }
    return 0;
}