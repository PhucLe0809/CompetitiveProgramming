#include <bits/stdc++.h>

using namespace std; 
int a[55], b[55];
map <int, int> mp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    for (int j = 0; j < m; j++) cin >> b[j];
    double tmp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            tmp = b[j]*1.0/a[i];
            if (floor(tmp)==tmp) mp[floor(tmp)]++;
        }
    }
    int answer;
    map <int, int> :: iterator it = mp.begin();
    while (it!=mp.end()){
        answer = it->second; it++;
    }
    cout << answer;
    return 0;
}