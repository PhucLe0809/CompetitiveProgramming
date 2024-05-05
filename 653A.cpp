#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> scan; int x;
    for (int i = 0; i < n; i++){
        cin >> x; 
        scan.push_back(x);
    }
    sort(scan.begin(), scan.end());
    scan.erase(unique(scan.begin(), scan.end()), scan.end());
    bool check = false; 
    if (scan.size()<3){
        cout << "NO"; return 0;
    }
    for (int i = 0; i<=scan.size()-3 && !check; i++){
        if (scan[i+2]-scan[i]==2){
            check = true;
        }
    }
    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}