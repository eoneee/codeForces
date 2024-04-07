#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int input, num;
  cin >> input;
  for(int i = 0; i < input; i++) {
    cin >> num;
    int size = 2 * num;
    for(int j = 0; j < size; j++) {
      for(int k = 0; k < size; k++) {
        if(((j / 2) + (k / 2)) % 2 == 0) {
          cout << "#";
        } else {
          cout << ".";
        }
      }
      cout << endl;
    }
  }
  return 0;
}