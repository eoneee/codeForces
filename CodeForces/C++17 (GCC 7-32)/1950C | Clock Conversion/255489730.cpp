#include <bits/stdc++.h>
using namespace std;
string hour[1441];
string minn[1441];
string noon[2] = {"AM", "PM"};
int solution(int indexx){
 int h = stoi(hour[indexx]);
 bool morning = true;
 
 if(h == 0){
  hour[indexx] = "12";
 }else if(h == 12){
  morning = false;
 }else if(h > 12){
  h -= 12;
  morning = false;
  hour[indexx] = (h < 10) ? "0" + to_string(h) : to_string(h);
 }else{
  hour[indexx] = (h < 10) ? "0" + to_string(h) : hour[indexx];
 }
 
 cout << hour[indexx] << ":" << minn[indexx] << " ";
 cout << (morning ? noon[0] : noon[1]) << endl;
 return 0;
}
int main() {
 int input;
 string time;
 cin >> input;
 for(int i = 0; i < input; i++) {
  cin >> time;
  hour[i] = time.substr(0,2);
  minn[i] = time.substr(3,-1);
  solution(i);
 }
 return 0;
}