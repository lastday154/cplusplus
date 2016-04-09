#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// recursive solution
int coinChanged(vector<int> v,int size,int N){
    //base case
    if(N==0){
        return 1;
    }
    if(N>0 && size==0){
        return 0;
    }
    if(N >= v[size-1]){
        return coinChanged(v,size,N-v[size-1]) + coinChanged(v,size-1,N);
    }else{
        return coinChanged(v,size-1,N);
    }
}

// dynamic programing solution
long int coinChanged1(vector<int> v,int size, int N){
    long int table[N+1][size+1];
    for(int i=0;i<=size;i++){
        table[0][i] = 1;
    }
    
    for(int i=1;i<=N;i++){
        table[i][0] = 0;
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=size;j++){
            if(i >= v[j-1] ){
                table[i][j] = table[i- v[j-1]][j] + table[i][j-1];
            }else{
                table[i][j] = table[i][j-1];
            }
        }
    }
    return table[N][size];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,C;
    cin>>N>>C;
    vector<int> v;
    for(int i;cin>>i;){
        v.push_back(i);
    }
    cout<<coinChanged1(v,v.size(),N);
    return 0;
}
