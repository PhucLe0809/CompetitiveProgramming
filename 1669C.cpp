#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
vector <int32_t> one, two;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp; bool check;
    while (test--)
    {
        cin >> n;
        one.clear(); two.clear();
        for (int i = 0; i < n; i++) 
        {
            cin >> tmp;
            if (i % 2 == 0) one.push_back(tmp);
            else two.push_back(tmp);
        }
        check = true;
        for (int i = 0; i < one.size() && check; i++)
            if ((one[i]-one[0]) % 2 != 0) check = false;
        for (int i = 0; i < two.size() && check; i++)
            if ((two[i]-two[0]) % 2 != 0) check = false;
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}