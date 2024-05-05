#include <bits/stdc++.h>

using namespace std; 
int32_t inp[15][15];
vector <int32_t> scan, per;
vector <vector<int32_t>> calc;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, s, t; cin >> n >> s >> t;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> inp[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        if (i!=s && i!=t) scan.push_back(i);
    }
    do{
        per.clear(); per.push_back(s);
        for (auto x:scan) per.push_back(x);
        per.push_back(t);
        calc.push_back(per);
    }while(next_permutation(scan.begin(), scan.end()));
    int64_t answer, plus;
    answer = 1e18;
    for (int i = 0; i < calc.size(); i++){
        plus = 0;
        for (int j = 1; j < calc[i].size(); j++){
            plus += inp[calc[i][j-1]][calc[i][j]];
        }
        answer = min(answer, plus);
    }
    cout << answer;
    return 0;
}