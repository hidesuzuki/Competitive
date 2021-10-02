#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b ;

    bool array[a.length()];
    int false_count = 0;

    for(int i=0;i<a.length();i++){
        if (a[i] == b[i]){
            array[i] = true;
        } else {
            array[i] = false;
            false_count++;
        }
    }

    if (false_count != 2){
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0 ;i<a.length();i++){
        if(array[i]){
            continue;
        }
        if(!array[i+1]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    return 0;
}
