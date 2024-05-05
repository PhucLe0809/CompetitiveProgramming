#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int calculate(int &res, char &key, int &num){
    switch (key){
        case '+': return res + num;
        case '-': return max(res - num, 0LL);
        case '*': return res * num;
        case '/': return res / num;
    }
    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x, n; cin >> x >> n;
    int res = x;
    while (n--){
        char x, y; int a, b; cin >> x >> a >> y >> b;
        int left = calculate(res, x, a);
        int right = calculate(res, y, b);
        res = max(left, right);
    }
    cout << res;
    return 0;
}