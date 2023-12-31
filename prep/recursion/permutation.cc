#include<bits/stdc++.h>
using namespace std;

void permute(string input, int i) {
    if(input[i] == '\0') {
        cout<<input<<endl;
        return;
    }

    for(int j=i; input[j] != '\0'; j++) {
        swap(input[i], input[j]);
        permute(input, i + 1);
        swap(input[i], input[j]);
    }
    return;
}

int main() {
    string input = "ABA";
    permute(input,0);

    return 0;
}