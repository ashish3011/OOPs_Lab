#include<iostream>
using namespace std;
int main()
{
    int i,n,j,c,temp,ma;
    cout<<"Enter the value of n  "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    while(k--)
    {
        ma=0;
        for(i=0;i<n;i++)
        {
            if(ma<a[i])
            {
                ma=a[i];
                c=i;
            }
        }
        a[c]=0;
    }
    cout<<ma<<endl;
    /*for(i=0;i<n;i++)
    {
        cout<<a[i];
    }*/
    return 0;
}
