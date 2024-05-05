#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n;
    string str; int32_t answer;
    while (test--)
    {
        cin >> n;
        if (n%2050 != 0) 
        { cout << "-1\n"; continue; }
        str = to_string(n/2050);
        answer = 0;
        for (int i = 0; i < str.size(); i++) answer += int(str[i]);
        answer -= str.size()*48;
        cout << answer << '\n';
    }
    return 0;
}