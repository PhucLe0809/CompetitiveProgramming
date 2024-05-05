#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x, a, b, c, cnt;
    while (test--){
        cin >> n;
        a = b = c = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x%3==0) a++;
            if (x%3==1) b++;
            if (x%3==2) c++;
        }
        cnt = 0;
        if (c>n/3){
            a += (c-n/3);
            cnt += (c-n/3);
            c = n/3;
        }
        if (a>n/3){
            b += (a-n/3);
            cnt += (a-n/3);
            a = n/3;
        }
        if (b>n/3){
            c += (b-n/3);
            cnt += (b-n/3);
            b = n/3;
        }
        if (c>n/3){
            a += (c-n/3);
            cnt += (c-n/3);
            c = n/3;
        }
        cout << cnt << '\n';
    }
    return 0;
}