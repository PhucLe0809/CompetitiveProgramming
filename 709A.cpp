#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, b, plus, d, tmp, answer;
    cin >> n >> b >> d;
    plus = 0; answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp <= b) plus += tmp;
        if (plus > d) 
        { answer++; plus = 0; }
    }
    cout << answer << '\n';
    return 0;
}