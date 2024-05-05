#include <bits/stdc++.h>

using namespace std;
vector <int32_t> ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; bool check;
    int32_t curr, sum;
    while (test--)
    {
        cin >> str;
        check = false; curr =0;
        ans.clear();
        for (int i = 0; i < str.size(); i++){
            if(str[i]=='1') curr++;
            else{
                if (curr!=0)
                ans.push_back(curr);
                curr = 0;
            }
            
        }
        if (curr != 0) ans.push_back(curr);
        sort(ans.begin(), ans.end(), greater<>());
        sum = 0;
        for(int i = 0; i < ans.size(); i += 2)
            sum += ans[i];
        cout << sum << '\n';
    }
    return 0;
}