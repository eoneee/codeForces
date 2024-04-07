#include <bits/stdc++.h>
using namespace std;
const int MAXX = 100001;
bool number[MAXX];
// vector<int> bd;
 
int solution(){
 for(int i = 1; i < MAXX; i++){
  if(number[i]){
   for(int j = i; i * j < MAXX; j++){
    if(number[j])
     number[i * j] = true;
   }
  }
 }
 return 0;
 
}
int main() {
 for(int i = 0; i < MAXX; i++){
  // i is bd?
  int temp = i;
  bool flag = true;
  while(temp > 0){
   if(temp % 10 > 1){
    flag = false;
    break;
   }
   temp /= 10;
  }
  number[i] = flag;
  // if(flag)
  //  bd.push_back(i);
 }
 
 solution();
 
 int test;
 cin >> test;
 int input;
 for(int i = 0; i < test; i++){
  cin >> input;
  if(number[input])
   cout << "YES\n";
  else
   cout << "NO\n";
 }
 return 0;
}