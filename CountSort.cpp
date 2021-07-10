#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n,max = INT_MIN;
	cout<<"enter the no of element in the array : ";
	cin>>n;
	int arr[n];
	cout<<endl<<"enter the elements of the array: ";
	for(int i=0;i<n;i++)
	  {
	    cin>>arr[i];
	     if(arr[i]>max)
	        max = arr[i]; // max will contain maximum element of array...
      }
	//aux array will count the frequency of element and the size of aux array will be the max element of the array...  
	int aux[max]={0};
	  
	for(int i=0;i<n;i++)
	    aux[arr[i]]++;
	//now we modify aux array ....to know the position of element in sorted array...    
	for(int i=1;i<=max;i++)	
	    aux[i] += aux[i-1];
	//now we traverse our original array from end and find its position by modified aux array...
	//let element is 5 now we find at 5 index what is its frequency in aux array...decrement by one and at that place .. place the element in original array	  
     int temp[n]; //store the sorted value...
	 for(int i=n-1;i>=0;i--)
         temp[--aux[arr[i]]] = arr[i];
	cout<<endl<<"After sorting the array is : ";    
	for(int i=0;i<n;i++)
	   cout<<temp[i]<<" ";
	return 0;
}
