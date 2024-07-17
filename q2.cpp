//display max element from the list
#include<iostream>
#include<list>
using namespace std;
int maximum(list<int> l)
{
	int m=l.front();
	for(int i: l)
	{
		if (i>m)
		{
			m=i;
		}
	}
	return m;
}
int main()
{
	//creating the list
	list<int> l;
	cout<<"Enter the size of the list: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		l.push_back(x);
	}
	cout<<"Max element: "<<maximum(l)<<endl;
}