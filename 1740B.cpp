#include <bits/stdc++.h>
#define maxarray 200005

using namespace std; 
pair <int64_t, int64_t> inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    int64_t answer;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> inp[i].first >> inp[i].second;
            if (inp[i].first < inp[i].second)
                swap(inp[i].first, inp[i].second);
        }
        sort(inp, inp+n);
        answer = 2*inp[0].second+inp[0].first;
        for (int i = 1; i < n; i++){
            answer += (2*inp[i].second+(inp[i].first-inp[i-1].first));
        }
        answer += inp[n-1].first;
        cout << answer << '\n';
    }
    return 0;
}