#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map <int, int> one, two, three;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; one[x]++;
    }
    for (int i = 1; i < n; i++){
        cin >> x; two[x]++;
    }
    for (int i = 2; i < n; i++){
        cin >> x; three[x]++;
    }
    for (auto &it:one){
        if (it.second != two[it.first]) cout << it.first << '\n';
    }
    for (auto &it:two){
        if (it.second != three[it.first]) cout << it.first << '\n';
    }
    return 0;
}