#include <bits/stdc++.h>

using namespace std; 
vector <pair<int32_t, int32_t>> scan;

bool comp(pair<int32_t, int32_t> a, pair<int32_t, int32_t> b){
    if (a.first==b.first) return (a.second < b.second);
    else return (a.first < b.first);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t x; cin >> x;
    char key;
    for (int res = 0; res <= 2; res++){
        switch ((x+res)%4){
            case 0: key='D'; break;
            case 1: key='A'; break;
            case 3: key='B'; break;
            case 2: key='C'; break;
        }
        scan.push_back({key, res});
    }
    sort(scan.begin(), scan.end(), comp);
    cout << scan[0].second << " " << char(scan[0].first);
    return 0;
}