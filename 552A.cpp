#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int answer = 0;
    int x, y, z, t;
    while (n--){
        cin >> x >> y >> z >> t;
        answer += (abs(z-x)+1)*(abs(t-y)+1);
    }
    cout << answer;
    return 0;
}