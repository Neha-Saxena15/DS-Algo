#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of elements in the array :";
	cin>>n;
int arr[n];
cout<<endl<<"enter the elements of the array:"<<endl;
for(int i=0;i<n;i++)
      cin>>arr[i];
	cout<<"before sorting the array is:"<<" ";
 for(int i=0;i<n;i++)
      	cout<<arr[i]<<" ";
	       
	  cout<<endl<<"after sorting the array is:"<<" "<<endl;  
	  
	  //Bubble Sort
	  for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	  {
	    	  	if(arr[j]<arr[j+1])
				  	{
				  	int temp;
					 temp = arr[j+1];
					 arr[j+1] = arr[j];
					 arr[j] = temp; 	
					}    	  	
			  }
		}
for(int i=0;i<n;i++)
      	cout<<arr[i]<<" ";
	       
	   return 0;    	
}
