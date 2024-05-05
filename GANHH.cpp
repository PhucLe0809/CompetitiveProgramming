#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_perfect(int &num){
    if (abs(num) == 1) return false;
    int sum = 0;
    for (int i = 1; i*i <= num; i++){
        if (num % i == 0){
            sum += i; sum += num/i;
        }
    }
    if (sqrt(num) == (int)sqrt(num)) sum -= (int)sqrt(num);
    return (sum - num != num && sum <= 2*num);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        cnt += (int)(is_perfect(x));
    }
    cout << cnt;
    return 0;
}