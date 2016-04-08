#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
  try
  {
    throw 20;   
  }
  catch(int e)
  {
    cout<<"An exception occured";
    cout<< "exception NR."<<e << endl;
  }
  return 0;
}