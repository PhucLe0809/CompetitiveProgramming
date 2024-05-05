#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

vector<int> imp_div(int &num){
    vector <int> out(1, 1);
    if (num != 1) out.push_back(num);
    for (int i = 2; i * i < num; i++){
        if (num % i == 0){
            out.push_back(i); out.push_back(num/i);
        }
    }
    if (num != 1 && sqrt(num) == (int)sqrt(num)) out.push_back((int)sqrt(num));
    sort(out.begin(), out.end());
    return out;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b; cin >> a >> b;
    vector <int> diva = imp_div(a);
    vector <int> divb = imp_div(b);
    vector <int> diff((int)diva.size() + (int)divb.size());
    auto it = set_difference(diva.begin(), diva.end(), divb.begin(), divb.end(), diff.begin());
    diff.resize(it - diff.begin());
    int sum = 0;
    for (auto &it:diff) sum += it;
    cout << sum;
    return 0;
}