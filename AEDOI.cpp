#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int calc_divisor(int &num){
    int sum = 0;
    for (int i = 1; i*i <= num; i++){
        if (num % i == 0){
            sum += i; sum += num/i;
        }
    }
    if (sqrt(num) == (int)sqrt(num)) sum -= (int)sqrt(num);
    sum -= num;
    return sum;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    int one = calc_divisor(a);
    int two = calc_divisor(b);
    if (one == b || two == a) cout << "YES"; else cout << "NO";
    return 0;
}