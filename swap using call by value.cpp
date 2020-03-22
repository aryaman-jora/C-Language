using namespace std;
#include<iostream>
main()
{
	int a,b,A,B;
	void swap(int,int);
	cout<<"enter the value of a,b";
	cin>>a,b;
	cout<<"before swaping"<<endl;
	cout<<A,B;
	
	swap(a,b);
	cout<<"after swaping"<<endl;
	cout<<A,B;
}
void swap(int x,int y)
{
	int z=x;
	x=y;
	y=z;
}
