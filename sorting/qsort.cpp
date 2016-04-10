#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int partition(int ar[],int low,int high) {
   // Enter code for partitioning and printing here. 
    int i = high;
    int p = ar[low];
    for(int j= high-1;j>low;j--){
        if(p < ar[j]){
            i--;
            swap(ar[i],ar[j]);
        }
        
    }
    swap(ar[i-1],ar[low]);
    return i-1;
    
}
void quicksort(int ar[],int low,int high){
  if(low<high){
    int p = partition(ar,low,high);
    quicksort(ar,low,p-1);
    quicksort(ar,p+1,high);
  }
}
int main(void) {
   
   int _ar_size;
   cin >> _ar_size;
    int _ar[_ar_size];
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar[_ar_i] = _ar_tmp;
    }

    partition(_ar,0,_ar_size);
    quicksort(_ar,0,_ar_size);
    for (int i = 0; i < _ar_size; ++i)
    {
      cout<< _ar[i]<<endl;
    }
   return 0;
}