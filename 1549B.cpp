#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
bool f[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, answer;
    string str, ansi;
    while (test--)
    {
        cin >> n >> str >> ansi;
        fill(f, f+n, 1); answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i]!=ansi[i] && ansi[i]=='1')
            { answer++; f[i] = 0; }
            else if (ansi[i]=='1')
                {
                    if (i && f[i-1] && str[i-1]=='1')
                    { answer++; f[i-1] = 0; }
                    else if (i < n-1 && f[i+1] && str[i+1]=='1')
                        { answer++; f[i+1] = 0; }
                }
        }
        cout << answer << '\n';
    }
    return 0;
}