#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; bool check;
    while (test--){
        cin >> n; check = false;
        deque <int> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            if (inp[i]==2048) check = true;
        }
        if (check){ cout << "YES\n"; continue; }
        sort(inp.begin(), inp.end());
        if (inp[0]>2048 || (n==1 && inp[0]<2048)){ cout << "NO\n"; continue; }
        int tmp;
        while(inp.size()>1 && inp[0]<2048){
            while(inp.size()>1 && inp[0]!=inp[1]) inp.pop_front();
            if (inp.size()==1) continue;
            tmp = inp[0]+inp[1];
            if (tmp==2048){ check = true; break; }
            inp.pop_front(); inp.pop_front();
            inp.push_front(tmp);
            sort(inp.begin(), inp.end());
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
        // for (auto &it:inp) cout << it << " "; cout << '\n'; 
    }
    return 0;
}