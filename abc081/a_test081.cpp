// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
  
int main(){
  int a;
  cin >> a;
  int b100 = a/100; // 0 or 1
  int b10 = (a - b100*100)/10; // 0 or 1
  int b1 = a  - b100*100 - b10*10;
  cout << b100 + b10 + b1 << endl;
}
