#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
    int pageNumber = 1;
    int count = 0;
        
    for(int chapter=1; chapter<=n; chapter++){
        int problems;
        cin>>problems;
        
        for(int index=1; index<=problems; index++){
            if(index==pageNumber){
                count++;
            }
            if(index%k==0 || index==problems){
                pageNumber++;
            }
            
        }
    }
    cout<<count<<endl;
    return 0;
}
