#include <bits/stdc++.h>

using namespace std;
vector <int> m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        m.push_back(x);
    }
    int t, answer = INT_MAX;
    int tmp;
    for (int i = 0; i < n; i++){
        t = m[i]; tmp = 0;
        for (int j = 0; j < t; j++){
            cin >> x; 
            tmp += 5*x;
        }
        tmp += 15*(t);
        answer = min(answer, tmp);
    }
    cout << answer;
    return 0;
}