#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  string consult;
 
  int count = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str.at(i) == 'a') {
      consult ="vowel";
      continue;
    }else if(str.at(i) == 'e'){
      consult ="vowel";
      continue;
    }else if(str.at(i) == 'i'){
      consult ="vowel";
      continue;
    }else if(str.at(i) == 'o'){
      consult ="vowel";
      continue;
    }else if(str.at(i) == 'u'){
      consult ="vowel";
      continue;
    }else{
      consult ="consonant";
    }
  }
  cout << consult << endl;
 }