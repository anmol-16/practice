#include<bits/stdc++.h>
using namespace std;

void subsequence(char* input, char* output, int i, int j){
    if(input[i] == '\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return ;
    }
    //Including a character
    output[j] = input[i];
    subsequence(input, output, i + 1, j + 1);
    
    //Not Including th echaracter
    subsequence(input, output, i + 1, j);

}
void printSubsequence(string input, string output)
{
    if (input.empty()) {
        cout << output << endl;
        return;
    }

    printSubsequence(input.substr(1), output + input[0]);
 
    printSubsequence(input.substr(1), output);
}
 
int main(){
    char input [] = "abc";
    char output [10];
    subsequence(input, output, 0, 0);

    return 0;
}

