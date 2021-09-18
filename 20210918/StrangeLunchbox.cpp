#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    cin >> n;
    cin >> x >> y;
    int a[n],b[n];
    
    int aSum = 0;
    int bSum = 0;

    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
        aSum += a[i];
        bSum += b[i];
    }

    if(x >= aSum || y >= bSum){
        cout << "-1" << endl;
        return 0;
    }

    return 0;
}
