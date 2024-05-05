#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
pair <int32_t, int32_t> inp[maxarray], scan[maxarray];
vector <int32_t> save;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, t, p;
    int32_t res, cnt;
    while (test--)
    {
        cin >> n >> k;
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i].first >> inp[i].second;
            if (inp[i].first <= k && k <= inp[i].second)
            {
                scan[cnt].first = inp[i].first;
                scan[cnt].second = inp[i].second;
                cnt++;
            }
        }
        if (cnt == 0) cout << "NO\n";
        else
        {
            //sort(inp, inp + n);
            res = 0; 
            for (int i = 1; i < 51; i++)
            {
                t = 0;
                for (int j = 0; j < cnt; j++)
                    if (scan[j].first <= i && i <= scan[j].second)
                        t++;
                res = max(res, t);
            }
            save.clear();
            for (int i = 1; i < 51; i++)
            {
                t = 0;
                for (int j = 0; j < cnt; j++)
                    if (scan[j].first <= i && i <= scan[j].second)
                        t++;
                if (t == res) save.push_back(i);
            }
            if (res > cnt) cout << "NO\n";
            else if (res < cnt) cout << "YES\n";
                 else 
                 {
                    if (save.size()==1) cout << "YES\n";
                    else cout << "NO\n";
                 }
        }
    }
    return 0;
}