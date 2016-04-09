#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <set>
using namespace std;


int main(){
  
  string line;
  getline(cin,line);
  set<char> mySet;
  for(char ch: line){
    if(ch== ' ') continue;
    mySet.insert(tolower(ch));
  }
  if(mySet.size() ==26){
    cout<< "pangram" <<endl;
  }else{
    cout<< "not pangram"<<endl;
  }
  return 0;
}