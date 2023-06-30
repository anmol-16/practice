#include<bits/stdc++.h>
using namespace std;
void generateStrings(char* input, int i, int j, char* output) {
    if(input[i] == '\0') {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    int digit = input[i] - '0';
    // inc first digit
    char ch = digit + 'A' - 1;
    output[j] = ch;
    generateStrings(input, i + 1, j + 1, output);
    //inc second digit
    if(input[i+1]!='\0'){
        int secondDigit = input[i+1] - '0';
        int newDigit = digit*10 + secondDigit;
        if(newDigit <= 26){
            ch = newDigit + 'A' -1;
            output[j] = ch;
            generateStrings(input, i + 2, j + 1, output);
        }
    }
    return;

}

int main() {
    char input[1000];
    cin>>input;
    char output[1000];
    generateStrings(input, 0, 0, output);
    
}