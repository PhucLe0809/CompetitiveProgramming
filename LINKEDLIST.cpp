#include <bits/stdc++.h>

using namespace std; 

struct student{
    string name, id;
    double gpa;
};
typedef struct student *stu;
struct Node{
    student data;
    Node *next;
};
typedef struct Node *node;

bool empty(node a){
    return a == nullptr;
}
int Size(node a){
    int cnt = 0;
    while (a!=nullptr){
        a = a->next;
        cnt++;
    }
    return cnt;
}
node makenode(){
    student s;
    cout << "Information of student\n";
    cout << "Name: "; cin.ignore(); getline(cin, s.name);
    cout << "ID: "; cin.ignore(); getline(cin, s.id);
    cout << "GPA: "; cin >> s.gpa;
    node tmp = new Node();
    tmp->data = s;
    tmp->next = nullptr;
    return tmp;
}
void push_front(node &a){
    node tmp = makenode();
    if (a==nullptr){
        a = tmp;
    }else{
        tmp->next = a;
        a = tmp;
    }
}
void push_back(node &a){
    node tmp = makenode();
    if (a==nullptr){
        a = tmp;
    }else{
        node p = a;
        while (p->next != nullptr){
            p = p->next;
        }
        p->next = tmp;
    }
}
void push_midd(node &a, int pos){
    int n = Size(a);
    if (pos<=0 || pos>n+1) return;
    if (pos==1){
        push_front(a); return;
    }
    if (pos==n+1){
        push_back(a); return;
    }
    node p = a;
    for (int i = 1; i < pos-1; i++){
        p = p->next;
    }
    node tmp = makenode();
    tmp->next = p->next;
    p->next = tmp;
}
void erase_front(node &a){
    if (a==nullptr) return;
    a = a->next;
}
void erase_back(node &a){
    if (a==nullptr) return;
    node infront = nullptr, behind = a;
    while (behind->next != nullptr){
        infront = behind;
        behind = behind->next;
    }
    if (infront==nullptr){
        a = nullptr;
    }else{
        infront->next = nullptr;
    }
}
void erase_midd(node &a, int pos){
    if (pos<=0 || pos>Size(a)) return;
    node infront = nullptr, behind = a;
    for (int i = 1; i < pos; i++){
        infront = behind;
        behind = behind->next;
    }
    if (infront==nullptr){
        a = a->next;
    }else{
        infront->next = behind->next;
    }
}
void print(student s){
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "GPA: " << fixed << setprecision(2) << s.gpa << endl;
}
void print_list(node a){
    while (a!=nullptr){
        print(a->data);
        a = a->next;
    }
}
void sort_list(node &a){
    for (node p=a; p->next!=nullptr; p=p->next){
        node min = p;
        for (node q=p->next; q->next!=nullptr; q=q->next){
            if (q->data.gpa < min->data.gpa) min = q;
        }
        student tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}

int main() 
{
    node head = nullptr;
    while (true){
        cout << "------------MENU------------\n";
        cout << "1. push_font\n";
        cout << "2. push_back\n";
        cout << "3. push_midd\n";
        cout << "4. erase_front\n";
        cout << "5. erase_back\n";
        cout << "6. erase_midd\n";
        cout << "7. print_list\n";
        cout << "8. sort_list\n";
        cout << "0. THE END\n";
        int choose; 
        cout << "Choose: "; cin >> choose;
        int x, pos;
        if (choose == 0) break;
        switch (choose){
            case 1: push_front(head); break;
            case 2: push_back(head); break;
            case 3: cin >> pos; push_midd(head, pos); break;
            case 4: erase_front(head); break;
            case 5: erase_back(head); break;
            case 6: cin >> pos; erase_midd(head, pos); break;
            case 7: print_list(head); break;
            case 8: sort_list(head); break;
        }
        cout << '\n';
    }
    return 0;
}