#include <bits/stdc++.h>

using namespace std;
vector <string> rat, woch, man, captain;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string name, ansi;
    for (int i = 0; i < n; i++){
        cin >> name >> ansi;
        if (ansi=="rat") rat.push_back(name);
        if (ansi=="woman" || ansi=="child") woch.push_back(name);
        if (ansi=="man") man.push_back(name);
        if (ansi=="captain") captain.push_back(name);
    }
    for (auto x:rat) cout << x << '\n';
    for (auto x:woch) cout << x << '\n';
    for (auto x:man) cout << x << '\n';
    for (auto x:captain) cout << x << '\n';
    return 0;
}