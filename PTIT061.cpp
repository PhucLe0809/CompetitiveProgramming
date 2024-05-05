#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int to_num(string &str){
    int out = 0, len = str.size();
    for (int i = 0; i < str.size(); i++){
        out += (str[i] - '0') * pow(10, len - i - 1);
    }
    return out;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> scan;
    for (int i = 0; i < n; i++){
        int num; cin >> num;
        if (num == 0){
            scan.push_back(num); continue;
        }
        string str = to_string(abs(num));
        int sign = (num >= 0)?(1):(-1);
        int cnt = 0;
        for (auto &it:str) cnt += (int)(it == '0');
        if (sign > 0) sort(str.begin(), str.end(), greater<>());
        else sort(str.begin(), str.end());
        int calc = to_num(str);
        if (sign > 0) calc = calc; //* pow(10, cnt);
        else{
            num = abs(num);
            int a = calc / (int)pow(10, to_string(calc).size() - 1);
            int b = calc % (int)pow(10, to_string(calc).size() - 1);
            calc = a * (int)pow(10, to_string(calc).size() + cnt - 1) + b;
        }
        scan.push_back(sign * calc);
    }
    sort(scan.begin(), scan.end(), greater<>());
    for (auto &it:scan) cout << it << " ";
    return 0;
}