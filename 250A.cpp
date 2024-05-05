#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    vector <int> scan; 
    int cnt, ele, total; ele = cnt = 0;
    for (int i = 0; i < n; i++){
        if (inp[i]>=0) ele++;
        else{
            cnt++; ele++;
            if (cnt==3){
                scan.push_back(ele-1);
                cnt = ele = 1; total += ele;
            }
        }
    }
    if (total!=n) scan.push_back(ele);
    cout << scan.size() << '\n';
    for (auto &it:scan) cout << it << " ";
    return 0;
}