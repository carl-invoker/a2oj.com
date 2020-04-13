#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = 0, counter = 0;
    while(x < s.length()) {
        switch(counter) {
            case 0: if(s[x] == 'h') counter = 1;
                    break;
            case 1: if(s[x] == 'e') counter = 2;
                    break;
            case 2: if(s[x] == 'l') counter = 3;
                    break;
            case 3: if(s[x] == 'l') counter = 4;
                    break;
            case 4: if(s[x] == 'o') counter = 5;
                    break;
        }
        x++;
    }
    if(counter != 5) cout << "NO";
    else cout << "YES";    
    return 0;
}
    


