#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    vector <int> cnt(3);
    int len = str.size(); bool check = true;
    for (int i = 0; i < len && check; i++){
        if (str[i] == '('){
            cnt[0]++;
        }
        if (str[i] == '['){
            cnt[1]++;
            check = check && (cnt[0] == 0);
        }
        if (str[i] == '{'){
            cnt[2]++;
            check = check && (cnt[0] == 0 && cnt[1] == 0);
        }
        if (str[i] == ')'){
            cnt[0]--;
        }
        if (str[i] == ']'){
            cnt[1]--;
            check = check && (cnt[0] == 0);
        }
        if (str[i] == '}'){
            cnt[2]--;
            check = check && (cnt[0] == 0 && cnt[1] == 0);
        }
    }
    check = check && (cnt[0] + cnt[1] + cnt[2] == 0);
    if (check) cout << "Yes"; else cout << "No";
    return 0;
}