#include <bits/stdc++.h>
#define maxarray 2005

using namespace std;
int inp[maxarray][maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> inp[i][j];
        }
    }
    bool check = true;
    for (int i = 0; i < n && check; i++) check = (inp[i][i] == 0);
    for (int i = 0; i < n && check; i++){
        for (int j = i+1; j < n && check; j++){
            check = ((inp[i][j] == inp[j][i]) && (inp[i][j] != 0));
        }
    }
    if (!check){
        cout << "NO\n"; return 0;
    }
    vector <int64_t> scan(n);
    for (int j = 0; j < n; j++) scan[j] = inp[0][j];
    sort(scan.begin(), scan.end());
    for (int i = 1; i < n && check; i++){
        for (int j = i+1; j < n && check; j++){
            double pivot = (inp[0][i] + inp[0][j] - inp[i][j])*1.0/2;
            if (pivot != floor(pivot)){
                check = false; continue;
            }
            check = binary_search(scan.begin(), scan.end(), (int64_t)pivot);
        }
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}