#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p;
    cin >> n >> p;

    int a[n];
    int counter = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] < p){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
