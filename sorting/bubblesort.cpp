#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int a[],int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for(int j=0;j< size-i;j++)
		{
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
void printArray(int a[],int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main(int argc, char const *argv[])
{
	int a[] = {1,34,2,3,56};
	int size = sizeof(a)/sizeof(a[0]);
	bubbleSort(a,size);
	printArray(a,size);
	return 0;
}