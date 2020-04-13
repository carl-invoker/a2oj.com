#include<bits/stdc++.h>
using namespace std;

int l_order(string a, string b) {
    int result = 0, range = (a.length() > b.length()) ? b.length() : a.length();
    for(int i = 0; i < range; i++) {
        if(tolower(a[i]) > tolower(b[i])) return 1;
        else if (tolower(a[i]) < tolower(b[i])) return -1;
    }
    return 0;
}
int main() {
    string a,b;
    cin >> a >> b;
    int order = l_order(a, b);    
    cout<<order;
    return 0;
}