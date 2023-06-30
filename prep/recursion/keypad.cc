#include<bits/stdc++.h>
using namespace std;

vector<string> key = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(char* input, int i, int j, char* output){
    if(input[i] == '\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }
    int digit = input[i] - '0';

    for(int k = 0; k < key[digit].size(); k++) {
        output[j] = key[digit][k];
        keypad(input, i + 1, j + 1, output);
    }
    return;
}

int main(){

    char input[10005];
    cin>>input;
    char output [10005];
    keypad(input, 0, 0, output);

}