#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_beauty(int &num){
    string str = to_string(num);
    string ansi = str;
    reverse(ansi.begin(), ansi.end());
    int sdigit = 0;
    for (auto &it:str) sdigit += it - '0';
    return (str == ansi && sdigit % 10 == 0);
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int l, r;
    while (cin >> l >> r){
        int cnt = 0;
        for (int i = l; i <= r; i++) cnt += (int)(is_beauty(i));
        cout << cnt << endl;
    }
    return 0;
}