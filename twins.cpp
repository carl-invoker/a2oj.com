#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int value[n], total_sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> value[i];
        total_sum += value[i];
    }
    
    sort(value, value + n, greater<int>()); //sort in descending order using INTROSORT

    int coins = 0;
    while(1) {
        coins++;
        int sum = 0;
        for(int j = 0; j < coins; j++) sum += value[j];
        if (sum > (total_sum - sum)) break;
    }
    cout << coins;
    return 0;
}