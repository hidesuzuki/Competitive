#include <bits/stdc++.h>
using namespace std;

int main() {
    int j;
    vector<int> input(26);
    for(int i=0; i<26;i++){
        cin>>j;
        input[i] = j;
        // cout << input[i] << endl;
    }
    
    for (int k = 0 ; k < 26; k++) {
        char c = 96+input[k];
        cout << c;
    }

    return 0;
}