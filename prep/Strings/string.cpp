#include<bits/stdc++.h>
using namespace std;
int main(){

    string s0;
    string s1("hello");
    string s2 = "hello world!";
    string s3(s2);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;


    string s = "I want to have an apple";
    int idx = s.find("apple");
    cout<<idx<<" idx of apple is"<<endl;


    //looping through the strings
    for(string::iterator it = s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
    int a = 10;
    cout<<typeid(a).name()<<" type "<<endl;




    //String tokenisation

}