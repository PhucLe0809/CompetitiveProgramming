#include <bits/stdc++.h>

using namespace std;
int inp[9][9];
int dx[]={-1, -1, 0, 1, 1, 1, 0, -1};
int dy[]={0, -1, -1, -1, 0, 1, 1, 1};
string step[]={"U", "LU", "L", "LD", "D", "RD", "R", "RU"};
vector <vector<pair<int, string>>> scan(8*8+5);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s, t; cin >> s >> t;
    if (s==t){
        cout << 0; return 0;
    }
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            inp[i][j] = 8*(i-1)+j;
        }
    }
    int x, y;
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            for (int t = 0; t < 8; t++){
                x = i+dx[t]; y = j+dy[t];
                if (1<=x && x<=8 && 1<=y && y<=8){
                    scan[inp[i][j]].push_back({inp[x][y], step[t]});
                    // scan[inp[x][y]].push_back({inp[i][j], step[t]});
                }
            }
        }
    }
    int a = 8*(8-(s[1]-'0')) + (s[0]-'a'+1);
    int b = 8*(8-(t[1]-'0')) + (t[0]-'a'+1);
    vector <bool> visited(8*8+5, false);
    vector <pair<int, string>> infront(8*8+5, {0, "-1"});
    queue <pair<int, string>> q;
    pair <int, string> tmp;
    q.push({a, "-1"}); visited[a] = true;
    while (q.size() && infront[b].second=="-1"){
        tmp = q.front(); q.pop();
        for (auto &it:scan[tmp.first]){
            if (!visited[it.first]){
                visited[it.first] = true;
                q.push(it);
                infront[it.first].first = tmp.first;
                infront[it.first].second = it.second;
            }
        }
    }
    vector <pair<int, string>> sta;
    while (true){
        sta.push_back(infront[b]);
        b = infront[b].first;
        if (b==a) break;
    }
    cout << sta.size() << '\n';
    reverse(sta.begin(), sta.end());
    for (auto &it:sta) cout << it.second << '\n';
    return 0;
}