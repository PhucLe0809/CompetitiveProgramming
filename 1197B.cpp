#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int pivot = max_element(inp.begin(), inp.end())-inp.begin();
    stack <int> sta; sta.push(inp[pivot]);
    int i = pivot-1, j = pivot+1;
    int tmp;
    while (i>=0 && j<n){
        tmp = max(inp[i], inp[j]);
        if (tmp < sta.top()){
            sta.push(tmp);
            if (tmp==inp[i]) i--;
            else j++;
        }else break;
    }
    while (i>=0 && inp[i]<sta.top()) {sta.push(inp[i]); i--; }
    while (j<n && inp[j]<sta.top()) {sta.push(inp[j]); j++; }
    if (sta.size()==n) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}