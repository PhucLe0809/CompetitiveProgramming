#include <bits/stdc++.h>

using namespace std;

bool run(string a, string b){
    int i, j; 
    i = a.size()-1;
    j = b.size()-1;
    map <char, int> x, y;
    while (i>=0 && j>=0){
        if (a[i]==b[j]){ 
            auto it1 = x.find(a[i]);
            auto it2 = y.find(b[j]);
            if ((it1!=x.end() && it2==y.end())||(it1==x.end() && it2!=y.end())){
                return false;
            }else{
                if (it1->second!=it2->second) return false;
                x[a[i]]++;
                y[b[j]]++;
                i--; j--; 
            }
        }else{
            x[a[i]]++; i--;
        }
    }
    if (j<0) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string a, b, str;
    while (n--){
        cin >> a >> b;
        if (run(a, b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}