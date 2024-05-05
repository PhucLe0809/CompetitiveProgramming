#include <bits/stdc++.h>

using namespace std;
set <int32_t> inp;
vector <int32_t> scan;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    for (int i = 0; i < n; i++)
    { cin >> tmp; inp.insert(tmp); }
    for (auto x : inp) scan.push_back(x);
    if (scan.size() < 3) cout << "NO\n";
    else
    {
        bool check = false;
        for (int i = 0; i < scan.size()-2 && !check; i++)
            if (scan[i]==scan[i+1]-1 && scan[i+1]==scan[i+2]-1)
                check = true;
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}