#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, k; cin >> a >> b >> k;
    int cnt = 0;
    for (int num = a; num <= b; num++){
        int x = num;
        int n = 0;
        while (x){
            n = n*10 + x%10; x /= 10;
        }
        if (abs(num - n) % k == 0) cnt++;
    }
    cout << cnt;
}