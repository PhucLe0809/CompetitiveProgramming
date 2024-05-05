#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    int pos, maxx; maxx = pos = -1;
    map <int, int> mp;
    for (int i = 0; i<n && pos==-1; i++){
        if (mp[inp[i]]!=0 || inp[i]==maxx+1){
            mp[inp[i]]++;
            maxx = max(maxx, inp[i]);
        }else pos = i+1;
    }
    cout << pos;
    return 0;
}