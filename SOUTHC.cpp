#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct Node{
    int x;
    int y;
    int z;
};
int times = 0;
Node inp[maxarray];
map <pair<int, pair<int, int>>, set<int>> mp;
set <pair<int, pair<int, int>>> scan;

void is_union_line(int i, int j){
    bool one, two, three;
    if (!inp[i].x || !inp[j].x){
        one = true;
    }else{
        one = (inp[i].x == inp[j].x);
    }
    if (!inp[i].y || !inp[j].y){
        two = true;
    }else{
        two = (inp[i].y == inp[j].y);
    }
    if (!inp[i].z || !inp[j].z){
        three = true;
    }else{
        three = (inp[i].z == inp[j].z);
    }
    if (one && two && three){
        int x, y, z;
        if (!inp[i].x || !inp[j].x){
            if (!inp[i].x && !inp[j].x){
                x = -1;
            }else x = (inp[i].x)?(inp[i].x):(inp[j].x);
        }else x = inp[i].x;
        if (!inp[i].y || !inp[j].y){
            if (!inp[i].y && !inp[j].y){
                y = -1;
            }else y = (inp[i].y)?(inp[i].y):(inp[j].y);
        } else y = inp[i].y;
        if (!inp[i].z || !inp[j].z){
            if (!inp[i].z && !inp[j].z){
                z = -1;
            }else z = (inp[i].z)?(inp[i].z):(inp[j].z);
        } else z = inp[i].z;
        mp[{x, {y, z}}].insert(i);
        mp[{x, {y, z}}].insert(j);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 0; i < k; i++){
        int x, y, z; cin >> x >> y >> z;
        scan.insert({x, {y, z}});
    }
    k = scan.size();
    int ind = 0;
    for (auto &it:scan){
        inp[ind].x = it.first;
        inp[ind].y = it.second.first;
        inp[ind].z = it.second.second;
        ind++;
    }
    int64_t answer = int64_t(n)*k;
    for (int i = 0; i < k; i++){
        for (int j = i+1; j < k; j++){
            is_union_line(i, j);
        }
    }
    int64_t cnt = 0;
    for (auto &it:mp){
        cnt += ((it.second).size() - 1);
    }
    cout << answer - cnt;
    return 0;
}