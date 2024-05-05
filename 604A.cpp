#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector <double> m(5), w(5);
    for (int i = 0; i < 5; i++) cin >> m[i];
    for (int i = 0; i < 5; i++) cin >> w[i];
    double hs, hu; cin >> hs >> hu;
    double answer = 100*hs - 50*hu;
    for (int i = 0; i < 5; i++){
        answer += max(0.3*500*(i+1), (1-m[i]/250)*500*(i+1) - 50*w[i]);
    }
    cout << fixed << setprecision(0) << answer;
    return 0;
}