#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    vector <int32_t> inp(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
        if (inp[i] != -1) inp[i]--;
    }
    int32_t answer, left, curr;
    answer = 0;
    for (int i = 0; i < n; i++)
    {
        left = 1; curr = i;
        while (inp[curr] != -1)
        {
            left++;
            curr = inp[curr];
        }
        answer = max(answer, left);
    }
    cout << answer;
    return 0;
}