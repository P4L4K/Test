//to display array elements
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> arr)
{
	cout<<"Displaying array elements: ";
	for (int i: arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
int main()
{
	cout<<"Enter the size of the array: ";
	int n;
	cin>>n;
	vector<int> arr(n,0);
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	display(arr);
}