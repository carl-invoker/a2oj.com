#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    vector<char> result;
    for(int i = 0; i < x.length(); i++) {
        if(x[i] != 'a' && x[i] != 'e'&& x[i] != 'i' && x[i] != 'o' && x[i] != 'u' && x[i] != 'y'
         && x[i] != 'A' && x[i] != 'E' && x[i] != 'I' && x[i] != 'O' && x[i] != 'U' && x[i] != 'Y') {
             result.push_back('.');
             result.push_back(tolower(x[i]));
         }  
    }
    for(auto i = result.begin(); i < result.end(); i++) cout << *i;
    return 0;
}