#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c, d; cin >> a >> b >> c >> d;
    map <int, int> mp;
    for (int i = 1; i <= round(sqrt(c)); i++){
        if (c % i == 0){
            mp[i]++; mp[c/i]++;
        }
    }
    if (sqrt(c) == floor(sqrt(c))) mp[int(sqrt(c))]--;
    map <int, int> cp;
    for (int i = 1; i <= round(sqrt(d)); i++){
        if (d % i == 0){
            cp[i]++; cp[d/i]++;
        }
    }
    if (sqrt(d) == floor(sqrt(d))) cp[int(sqrt(d))]--;
    vector <int> scan;
    for (auto &it:mp){
        if (cp[it.first] == 0) scan.push_back(it.first);
    }
    int answer = -1;
    for (auto &it:scan){
        if (it % a == 0 && it % b != 0){
            answer = it; break;
        }
    }
    cout << answer;
    return 0;
}