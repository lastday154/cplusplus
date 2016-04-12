#include <iostream>
using namespace std;

int fib(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fib(n-1) + fib(n-2);
}
int fib1(int n){
	int F[n+1];
	F[0] = 0; F[1] = 1;
	for (int i = 2; i <=n; ++i)
	{
		F[i] = F[i-1] + F[i-2];
	}
	return F[n];
}
int main(int argc, char const *argv[])
{
	cout<<fib(10)<<"\n";	
	cout<<fib1(10)<<"\n";
	return 0;
}