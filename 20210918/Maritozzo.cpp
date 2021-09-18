#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2,s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    string t;
    cin >> t;

    string result = "";
    // cout << "s1 = " + s1 << endl;
    // cout << "s2 = " + s2 << endl;
    // cout << "s3 = " + s3 << endl;
    // cout << "t = " + t << endl;
    for(int i=0; i<t.size();i++){
        // cout << "i = " + to_string(i) + " , t[i] = " + t[i] << endl;
        if (t[i] == '1'){
            result += s1;
        } else if (t[i] == '2') {
            result += s2;
        } else if (t[i] =='3') {
            result += s3;
        }
    }
    cout << result << endl;

    return 0;
}
