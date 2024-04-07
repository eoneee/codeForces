#include <bits/stdc++.h>
using namespace std;
vector <int> num[1000];
int input;
string test(int fir, int sec, int thi){
 if(fir < sec && sec < thi){
  return "STAIR";
 }else if(fir < sec && sec > thi){
  return "PEAK";
 }else{
  return "NONE";
 }
 return 0;
}
int main() {
 cin >> input;
 int a, b, c;
 for(int i = 0; i < input; i++){
  cin >> a >> b >> c;
  num[i].push_back(a);
  num[i].push_back(b);
  num[i].push_back(c);
 }
 for(int i = 0; i < input; i++){
  cout << test(num[i][0], num[i][1], num[i][2]) << endl;
 }
 return 0;
}