#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    while(T--){
        int A,B;
        cin>>A>>B;
        int count=0;
        for(int i= sqrt(A);i<= sqrt(B);i++){
            if((i*i) >= A && ((i*i)<=B)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
