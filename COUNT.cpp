#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; 
    vector <int> prefix(n+1);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x; sum += x;
        prefix[i] = prefix[i-1] + x;
    }
    if (sum % 3 != 0){
        cout << 0 << endl;
        return 0;
    }
    int one = sum / 3;
    vector <int> start;
    for (int i = 1; i <= n-2; i++){
        if (prefix[i] == one) start.push_back(i);
    }
    int two = (sum / 3) * 2;
    vector <int> thend;
    for (int i = 2; i <= n-1; i++){
        if (prefix[i] == two) thend.push_back(i);
    }
    int res = 0, len = thend.size();
    for (auto &it:start){
        int pos = upper_bound(thend.begin(), thend.end(), it) - thend.begin();
        res += (len - pos);
    }
    cout << res << endl;
    return 0;
}