#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int to_num(string str){
    reverse(str.begin(), str.end());
    int num = 0, len = str.size();
    for (int i = 0; i < len; i++){
        num = num * 10 + (str[i] - '0');
    }
    return num;
}
bool is_prime(int num){
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        string str; cin >> str;
        cnt += (int)(is_prime(to_num(str)));
    }
    cout << cnt;
    return 0;
}