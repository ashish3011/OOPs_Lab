#include<iostream>
using namespace std;
int main()
{
    int i;
    char s[100];
    cout<<"enter the string\n";
    cin>>s;
    for(i=0;s[i]!='\0';i++);
    cout<<"string length = "<<i;

    return 0;
}
