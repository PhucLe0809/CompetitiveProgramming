#include <bits/stdc++.h>

using namespace std;
int n;

int64_t Rand(int64_t l, int64_t h){
    return l + ((int64_t)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (int64_t)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (int64_t)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}
bool comp(pair<int64_t, pair<int64_t, int64_t>> a, pair<int64_t, pair<int64_t, int64_t>> b){
    if (a.first != b.first) return a.first > b.first;
    else{
        if (a.second.first != b.second.first) return a.second.first > b.second.first;
        else return a.second.second > b.second.second;
    }
}
pair<int64_t, int64_t> sinh(int64_t x, int64_t y){
    if(x == y || x==0 || y==0)
    {
        x = rand() % n + 1;
        y = rand() % n + 1;
        sinh(x, y);
    }
    return {x, y};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    srand(time(NULL)); cin >> n;
    vector <pair<int64_t, int64_t>> inp(n+1);
    for (int i = 1; i <= n; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    int64_t x, y, z, t, a, b, c, gcd, cnt;
    int64_t one, two;
    vector <pair<int64_t, pair<int64_t, int64_t>>> scan;
    for (int k = 1; k < 500; k++){
        pair <int64_t, int64_t> tmp = sinh(0, 0);
        one = tmp.first; two = tmp.second;
        x = inp[one].first; y = inp[one].second;
        z = inp[two].first; t = inp[two].second;
        a = t-y;
        b = -(z-x);
        c = -x*a - y*b;
        gcd = __gcd(__gcd(abs(a), abs(b)), abs(c));
        if (gcd==0) continue;
        a /= gcd; b /= gcd; c /= gcd;
        cnt = 2;
        for (int i = 1; i <= n; i++){
            if (i==one || i==two) continue;
            if (a*inp[i].first + b*inp[i].second + c == 0) cnt++;
        }
        if (cnt > n/2){
            if (a < 0) {
                a = -a; b = -b; c = -c;
            }
            scan.push_back({a, {b, c}});
        }
    }
    if (scan.size() == 0) cout << "0 0 0";
    else{
        sort(scan.begin(), scan.end(), greater<>());
        cout << scan[0].first << " " << scan[0].second.first << " " << scan[0].second.second;
    }
    return 0;
}