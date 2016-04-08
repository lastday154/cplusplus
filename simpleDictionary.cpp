#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


int main(){
  
  vector<string> v;
  for(string s;cin>>s;){
    v.push_back(s);
  }
  cout<<v.size()<<"\n";

  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    if(i==0 || v[i-1] != v[i]){
      cout<<v[i]<<"\n";
    }
  }
  return 0;
}