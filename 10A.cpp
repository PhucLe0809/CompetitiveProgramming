#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int64_t a, b;
    cin >> a >> b;
    int64_t answer = (b-a)*p1;
    int64_t x, y;
    for (int i = 1; i < n; i++){
        cin >> x >> y;
        answer += min(x-b, t1)*p1+max(min(x-b-t1, t2), int64_t(0))*p2+max(x-b-t1-t2, int64_t(0))*p3;
        answer += (y-x)*p1;
        a = x; b = y;
    }
    cout << answer;
    return 0;
}