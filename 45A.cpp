#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string month; cin >> month;
    int k; cin >> k;
    vector <string> scan(15);
    scan[1] = "January";
    scan[2] = "February";
    scan[3] = "March";
    scan[4] = "April";
    scan[5] = "May";
    scan[6] = "June";
    scan[7] = "July";
    scan[8] = "August";
    scan[9] = "September";
    scan[10] = "October";
    scan[11] = "November";
    scan[12] = "December";
    int t;
    for (t = 1; t <= 12; t++){
        if (scan[t]==month) break;
    }
    t = (t+k)%12;
    if (t==0) t = 12;
    cout << scan[t];
    return 0;
}