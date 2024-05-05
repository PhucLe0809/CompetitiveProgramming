#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int max_rectangle(vector<int> &hight){
    int n = hight.size();

    stack <int> goleft;
    deque <int> idleft;
    for (int i = 0; i < n; i++){
        while (!goleft.empty() && hight[goleft.top()] >= hight[i]){
            goleft.pop();
        }
        int j = (!goleft.empty()) ? (goleft.top()) : (-1);
        idleft.push_back(j);
        goleft.push(i);
    }

    stack <int> goright;
    deque <int> idright;
    for (int i = n-1; i >= 0; i--){
        while (!goright.empty() && hight[goright.top()] >= hight[i]){
            goright.pop();
        }
        int j = (!goright.empty()) ? (goright.top()) : (n);
        idright.push_front(j);
        goright.push(i);
    }

    int res = 0;
    for (int i = 0; i < n; i++){
        res = max(res, (idright[i] - idleft[i] - 1) * hight[i]);
    }

    return res;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int m, n; cin >> m >> n;
    int res = 0;
    vector <int> scan(n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int num; cin >> num;
            if (num) scan[j]++;
            else scan[j] = 0;
        }
        res = max(res, max_rectangle(scan));
    }

    cout << res << endl;

    return 0;
}