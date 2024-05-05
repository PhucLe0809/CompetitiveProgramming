#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int priority(char op){
    if (op == '+' || op == '-') return 1;
    return 2;
}

void calc_oper(stack<int> &val, char op){
    int r = val.top(); val.pop();
    int l = val.top(); val.pop();

    switch (op){
        case '+': val.push(l + r); break;
        case '-': val.push(l - r); break;
        case '*': val.push(l * r); break;
        case '/': val.push(l / r); break;
    }
}

string compact(string str){
    string res = "";
    for (auto &it:str){
        if (it != ' ') res += it;
    }
    return res;
}

int calc_express(string str){
    stack <int> val;
    stack <int> oper;
    str = compact(str);
    int len = str.size();

    for (int i = 0; i < len; i++){
        if (isdigit(str[i])){
            int num = 0;
            while (i < len && isdigit(str[i])){
                num = num * 10 + (str[i] - '0');
                i++;
            }
            val.push(num);
            i--;
        }else{
            char op = str[i];
            while (!oper.empty() && priority(op) <= priority(oper.top())){
                calc_oper(val, oper.top());
                oper.pop();
            }
            oper.push(op);
        }
    }

    while (!oper.empty()){
        calc_oper(val, oper.top());
        oper.pop();
    }

    return val.top();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str; getline(cin, str);
    // 2*3 + 4*5
    cout << calc_express(str) << endl;
    return 0;
}