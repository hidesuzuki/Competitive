#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s ;

  string res = s.substr(n - 1, 1);

  if(res == "o") {
    cout << "Yes" << endl;
  } else if (res == "x") {
    cout << "No"  << endl;
  }
  return 0;
}