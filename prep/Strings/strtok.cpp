#include<bits/stdc++.h>
using namespace std;



char* 
int main(){
    char s[100] = "Today is a rainy day";
    char *ptr = strtok(s," ");
    cout<<ptr<<endl;
    while(ptr != NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
}