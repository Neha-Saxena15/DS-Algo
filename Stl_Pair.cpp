#include<bits/stdc++.h>
#include<utility>
using namespace std;
void PairSorting(int a[],char b [],int n)
     {
     	pair<int,char>p[n]; //an array of pairs...
     	for(int i=0;i<n;i++)
     	   {
     	   	  p[i].first = a[i];//all the first element of pair will be the element of A array...
     	   	  p[i].second = b[i];//all the Second element of pair will be the element of B array...
			}
		sort(p,p+n); //sorting according to first element of pair....
		cout<<endl<<"B array  sorted according to A array :"<<endl;
		cout<<"after sorting array  B: ";	
		for(int i=0;i<n;i++)
			
		   cout<<p[i].second<<" ";
     
	 }



int main()
{
	int n;
	cout<<"enter the size of array";//size of both array will be same
	cin>>n;
	int a[n];
	char b[n];
	cout<<"enter the integer element of A array: ";
	for(int i=0;i<n;i++)
	  cin>>a[i];
	cout<<endl<<"enter the character element  of B array: ";
	for(int i=0;i<n;i++)
	   cin>>b[i];
	PairSorting(a,b,n);//we make pair of both array and sort B according to A array....   
	     
	return 0;
}
