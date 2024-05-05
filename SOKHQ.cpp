#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_effect(int &num){
    int sum = 0;
    for (int i = 1; i * i <= num; i++){
        if (num % i == 0){
            sum += i; sum += num/i;
        }
    }
    if (sqrt(num) == (int)(sqrt(num))) sum -= (int)sqrt(num);
    return sum >= 2*num;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        if (is_effect(i)) cout << i << " ";
    }
    return 0;
}