#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n+1);
    int total = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i]; total += inp[i];
    }
    int x, y; cin >> x >> y;
    int tmp = 0, pos = -1;
    for (int i = 1; i <= n; i++){
        tmp += inp[i];
        if (x<=tmp && tmp<=y && x<=total-tmp && total-tmp<=y){
            pos = i;
        }
    }
    cout << pos+1;
    return 0;
}