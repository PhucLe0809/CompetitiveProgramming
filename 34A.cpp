#include <bits/stdc++.h>
#define inf 1e9

using namespace std;
vector <pair<int32_t, int32_t>> inp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp; inp.push_back({tmp, i+1});
    }
    int32_t answer = abs(inp[0].first-inp[n-1].first);
    int32_t infront, behind;
    infront = 1; behind = n;
    for (int i = 0; i < n-1; i++)
    {
        if (answer > abs(inp[i+1].first-inp[i].first))
        {
            answer = abs(inp[i+1].first-inp[i].first);
            infront = inp[i].second;
            behind = inp[i+1].second; 
        }
    }
    cout << infront << " " << behind;
    return 0;
}