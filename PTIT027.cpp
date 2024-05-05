#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        string str; cin >> str;
        int len = str.size(), cnt;
        cnt = 0;
        vector <bool> left(len);
        for (int i = 0; i < len; i++){
            (str[i] == '(')?(cnt++):(cnt--);
            left[i] = (cnt >= 0);
            (cnt < 0)?(cnt = 0):(cnt);
        }
        cnt = 0;
        vector <bool> right(len);
        for (int i = len - 1; i >= 0; i--){
            (str[i] == ')')?(cnt++):(cnt--);
            right[i] = (cnt >= 0);
            (cnt < 0)?(cnt = 0):(cnt);
        }
        vector <bool> scan(len);
        for (int i = 0; i < len; i++) scan[i] = (left[i] && right[i]);
        int res = 0; scan.push_back(!scan.back());
        cnt = 1;
        for (int i = 1; i <= len; i++){
            if (scan[i] == scan[i-1]) cnt++;
            else{
                if (scan[i-1]) res = max(res, cnt);
                cnt = 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}