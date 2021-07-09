#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array";
	cin>>n;
	int a[n];
	cout<<"enter the element of array"<<endl;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	 for(int i =1;i<n;i++)
	   {
	   	   int curr = a[i];
	   	   int j = i-1;
	   	   while(a[j] > curr)
	   	     {
	   	     	a[j+1] = a[j];
	   	     	j--;
				}
			a[j+1] = curr;	
		} 
		cout<<"after sorting array is :";
		for(int i=0;i<n;i++)
		  cout<<a[i]<<" ";
return 0;
}
