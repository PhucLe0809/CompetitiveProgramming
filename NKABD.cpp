#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int popular[maxarray];

bool is_good(int num){
    int out = 1;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            out += i; out += num/i;
        }
    }
    if (floor(sqrt(num)) == sqrt(num)) out -= int(sqrt(num));
    return (out > num);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int l, r; cin >> l >> r;
    if (r < 12){
        cout << 0; return 0;
    }
    fill(popular, popular + r+1, 0);
    // for (int i = 0; i < 12; i++) popular[i] = 0;
    for (int i = 12; i <= r; i++){
        if (popular[i] == 0){
            if (!is_good(i)) continue;
            for (int j = i; j <= r; j += i){
                popular[j] = 1;
            }
        }
    }
    for (int i = 12; i <= r; i++) popular[i] += popular[i-1];
    cout << popular[r] - popular[l-1];
    return 0;
}