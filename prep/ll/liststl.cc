#include<bits/stdc++.h>
using namespace std;

int main() {

    list<string> l;

    l.push_back("apple");
    l.push_back("mango");
    l.push_back("litchi");
    for(string s : l) {
        cout<<s<<"->";
    }
    cout<<endl;
    l.sort();
    for(string s : l) {
        cout<<s<<"->";
    }
    cout<<endl;
    l.pop_front();
    for(string s : l) {
        cout<<s<<"->";
    }
    return 0;
}