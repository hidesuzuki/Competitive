#include <bits/stdc++.h>
using namespace std;

int main() {
    // 配列数の受け取り。n*nの配列になる
    int n;
    cin >> n;
    string s[n][n];
    string t[n][n];

    string k;
    cout << "create t" << endl;
    // ２次元配列Sを作成
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cin>>k;
            s[i][j] = k;
        }
    }
    // ２次元配列Tも作成
    cout << "create t" << endl;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cin>>k;
            t[i][j] = k;
        }
    }
    cout << s << endl;
    return 0;
}
