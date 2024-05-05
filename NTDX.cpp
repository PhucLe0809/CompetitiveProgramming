#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int to_num(string &str){
    int num = 0;
    for (auto &it:str) num = num*10 + (it - '0');
    return num;
}
bool is_prime(int &num){
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n; cin >> m >> n;
    string one = to_string(m);
    string two = to_string(n);
    vector <string> scan;
    deque <string> odd = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    for (auto &it:odd) scan.push_back(it);
    while (odd.back().size() <= two.size()){
        string num = odd.front(); odd.pop_front();
        int i = 0;
        while (i <= 9 && odd.back().size() <= two.size()){
            char key = (i + '0');
            scan.push_back(key + num + key);
            odd.push_back(scan.back());
            i++;
        }
    }
    deque <string> even = {"00", "11", "22", "33", "44", "55", "66", "77", "88", "99"};
    for (auto &it:even) scan.push_back(it);
    while (even.back().size() <= two.size()){
        string num = even.front(); even.pop_front();
        int i = 0;
        while (i <= 9 && even.back().size() <= two.size()){
            char key = (i + '0');
            scan.push_back(key + num + key);
            even.push_back(scan.back());
            i++;
        }
    }
    // for (auto &it:scan) cout << it << " ";
    vector <int> out;
    for (auto &it:scan){
        if (it[0] == '0') continue;
        int num = to_num(it);
        if (!(num >= m && num <= n)) continue;
        if (is_prime(num)) out.push_back(num);
    }
    if (out.empty()) cout << 0;
    else{
        sort(out.begin(), out.end());
        for(auto &it:out) cout << it << endl;
    }
    return 0;
}