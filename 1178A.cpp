#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
vector <int32_t> out;
pair <int32_t, int32_t> inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n; 
    int32_t total = 0;
    for (int i = 1; i <= n; i++){
        cin >> inp[i].first; 
        inp[i].second = i;
        total += inp[i].first;
    }
    int32_t sum = inp[1].first;
    out.push_back(1);
    sort(inp+2, inp+n+1);
    for (int i = 2; i <= n; i++){
        if (2*inp[i].first > inp[1].first) break;
        else{
            if (sum > total-sum) break;
            else{
                sum += inp[i].first;
                out.push_back(inp[i].second);
            }
        }
    }
    if (sum <= total-sum) cout << 0;
    else{
        cout << out.size() << '\n';
        for (auto x:out) cout << x << " ";
    }
    return 0;
}