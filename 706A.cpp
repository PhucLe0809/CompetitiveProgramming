#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double a, b; cin >> a >> b;
    int n; cin >> n;
    double answer = INT_MAX*1.0;
    double x, y, v, d;
    while (n--){
        cin >> x >> y >> v;
        d = sqrt(pow(x-a, 2)+pow(y-b, 2));
        answer = min(answer, d/v);
    }
    cout << fixed << setprecision(9) << answer;
    return 0;
}