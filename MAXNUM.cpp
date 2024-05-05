#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    vector <pair<string, string>> scan;
    string num = ""; int len = 0; str += "lhp";
    for (auto &it:str){
        if (isdigit(it)) num += it;
        else{
            if (!num.empty()){
                scan.push_back({num, num});
                len = max(len, (int)num.size());
            }
            num = "";
        }
    }
    for (auto &it:scan){
        string temp = it.first;
        while (temp.size() < len) temp = '0' + temp;
        it.first = temp;
    }
    sort(scan.begin(), scan.end(), greater<>());
    string answer = scan[0].second;
    while (answer.size() > 1 && answer[0] == '0') answer.erase(answer.begin());
    cout << answer;
    return 0;
}