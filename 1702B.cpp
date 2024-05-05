#include <bits/stdc++.h>

using namespace std;
vector <char> scan;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; bool check, add;
    int32_t run, answer;
    while (test--)
    {
        cin >> str; scan.clear(); answer = 0;
        for (int i = 0; i < str.size(); i++)
        {
            check = false;
            if (scan.empty()) check = true;
            if (scan.size() == 1)
            {
                if (str[i] != scan[0]) check = true;
                else check = false;
            }
            if (scan.size() == 2)
            {
                if (str[i] != scan[0] && str[i] != scan[1])
                    check = true;
                else check = false;
            }
            if (scan.size() == 3)
            {
                if (str[i] == scan[0] || str[i] == scan[1] || str[i] == scan[2])
                    add = false;
                else add = true;
            }
            if (scan.size() == 3 && add)
            {
                answer++; scan.clear(); scan.push_back(str[i]);
            } else 
            {
                if (check) scan.push_back(str[i]);
            }
            // for (auto &x : scan) cout << x << " ";
            // cout << '\n';
        }
        if (scan.size() < 4) answer++;
        cout << answer << '\n';
    }
    return 0;
}