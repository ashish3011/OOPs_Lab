#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<< "Enter the value of i \n";
	cin>>i;
	if(i%10>=5)
	{
		if(i%10==5)
		i=i+4;
		else if(i%10==6)
			i=i+3;
		else if(i%10==7)
			i=i+2;
		else if(i%10==8)
			i=i+1;
		else
			i=i;
	}
	else
	cout<<i<<endl;
	cout<<i<<endl;
	return 0;
}
