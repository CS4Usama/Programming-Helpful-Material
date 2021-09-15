#include <iostream>
using namespace std;
int main()
{
	int arr[5], i, j, tmp;
	for(i=0;i<5;i++)
	{
		cout<<"Enter Value: ";
		cin>>arr[i];
	}
	cout<<"\nThe Original Values in the Array:\n";
	for(i=0;i<5;i++)
		cout<<arr[i]<<"  ";
	for(i=0;i<5-1;i++)
		for(j=0;j<(5-i)-1;j++)
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
	cout<<"\n\nThe Sorted Array is:\n";
	for(i=0;i<5;i++)
		cout<<arr[i]<<"  ";
	return 0;
}
