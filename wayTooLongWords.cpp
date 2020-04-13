#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char* word[n];
    for(int i = 0; i < n; i++) {
        word[i] = (char *) malloc(sizeof(char) * 100);
        cin>>word[i];
    }
    for(int i = 0; i < n; i++) {
        if(strlen(word[i]) <= 10) cout<<word[i]<<endl;
        else {
            int midlen = strlen(word[i]) - 2;
            cout<<word[i][0]<<midlen<<word[i][strlen(word[i]) - 1]<<endl;
        }
    }
    return 0;
}