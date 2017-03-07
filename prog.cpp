#include<iostream>
using namespace std;
class num{
	int val;
	public:
	void readnum();
	void printnum();
	void checknum();
};
void num::readnum()
{
	cout<<"Input an integer : ";
	cin>>val;
}
void num::printnum()
{
	cout<<val<<" ";
}
void num::checknum()
{
	while(val!=1)
	{
		printnum();
		if(val%2!=0) val=3*val+1;
		else val/=2;
	}
}
int main()
{
	num n;
	n.readnum();
	n.checknum();
	n.printnum();
	cout<<endl;
	return 0;
}
