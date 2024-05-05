#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    int answer = 0;
    for (int i = a; i <= b; i++){
        if (i % 2 == 0) answer += i;
    }
    cout << answer;
    return 0;
}