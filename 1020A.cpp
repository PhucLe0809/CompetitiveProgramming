#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, h, a, b, k; cin >> n >> h >> a >> b >> k;
    int64_t x, y, z, t, answer, one, two;
    while (k--){
        cin >> x >> y >> z >> t;
        if (x==z){
            cout << abs(y-t) << '\n'; continue;
        }
        one = (y>=b)?(b):((y<=a)?(a):(y));
        two = (t>=b)?(b):((t<=a)?(a):(t));
        answer = abs(y-one) + abs(t-two) + abs(one-two) + abs(x-z);
        cout << answer << '\n';
    }
    return 0;
}