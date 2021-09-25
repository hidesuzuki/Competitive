#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    int thisCount = 0;
    string thisCountStr = "";

    for(int i = 0; i < n; i++){
        thisCount = i+1;
        thisCountStr = to_string(thisCount);
        if(thisCountStr.find("1") != 0){
            continue;
        }
        for(int j = 0; j < thisCountStr.length(); j++){
            if(thisCountStr[j] != '1'){
                result += j;
                break;
            } else if (j == thisCountStr.length()-1) {
                result += (j+1);
            }
        }
    }

    cout << result << endl;
    return 0;
}
