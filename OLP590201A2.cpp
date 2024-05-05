#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int scan[2*maxarray];
int answer[maxarray];
map <int, int> mp;

int get_intersection_point(double a, double b, double c, double d, double y, bool start){
    double nx = b - d;
    double ny = c - a;
    double x = ((nx*a + ny*b) - ny*y)/nx;
    if (start) return int((x == ceil(x))?(x + 1):(ceil(x)));
    else return int((x == floor(x))?(x - 1):(floor(x)));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int l, r, y; cin >> l >> r >> y;
    for (int i = 0; i < n; i++){
        int x, v, h; cin >> x >> v >> h;
        int a = get_intersection_point(x, 0, x-h, 0+v, y, true);
        int b = get_intersection_point(x, 0, x+h, 0+v, y, false);
        a = max(a, l); b = min(b, r);
        answer[i] = b;
        mp[a]++; mp[b] += 0;
    }
    mp[l]++; mp[r+1]--;
    int thend = 0;
    for (auto &it:mp) scan[++thend] = it.first;
    for (int i = 1; i < thend; i++){
        int mid = (scan[i] + scan[i+1])/2;
        mp[mid] += 0;
    }
    for (int i = 0; i < n; i++){
        auto it = mp.find(answer[i]);
        it++; mp[it->first]--;
    }
    // for (auto &it:mp) cout << it.first << " " << it.second << endl; 
    map <int, int> calc;
    int infront = 0;
    for (auto &it:mp){
        infront += it.second; calc[it.first] = infront;
    }
    // for (auto &it:calc) cout << it.second << " "; cout << endl;
    fill(answer, answer + n+1, 0);
    for (int i = 1; i < thend; i++){
        int a = scan[i], b = scan[i+1];
        if (a == b){
            continue;
        }
        int mid = (a + b)/2;
        answer[calc[mid]] += max(b-a-1, 0);
        answer[calc[a]]++;
        // for (int i = 1; i <= n; i++) cout << answer[i] << " "; cout << endl; 
    }
    for (int i = 1; i <= n; i++){
        answer[i] += answer[i-1];
        cout << answer[i] << '\n';
    }
    cout << (r - l + 1);
    return 0;
}