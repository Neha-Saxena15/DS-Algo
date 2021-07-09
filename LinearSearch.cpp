#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements in array"<<endl;
	cin>>n;
	cout<<"enter the elements in array:"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	     cin>>arr[i];
	cout<<"enter the element you want to find in the array";
	int k,item;
	cin>>k;
	bool flag = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			flag = 1; 
			item = i;
			break;	
		}
	}
	if(flag==1)
	{
		cout<<"your element is found at "<<item<<"  position";
		
	}
	else
	  cout<<"your element is not present in the array";
	
	return 0;
}
