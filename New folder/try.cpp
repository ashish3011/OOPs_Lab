#include<iostream>
using namespace std;
int main ()
{
    int A, B, C, D, sq, i = 32;
    while ((sq = i * i) <= 9999) {
        A = sq / 1000;
        B = (sq % 1000) / 100;
        C = (sq % 100) / 10;
        D = (sq % 10);
        if ((A == B) && (C == D))
            {cout<<i*i<<endl;
            cout<<i<<endl;
            break;
            }
        i++;
    }
    return 0;
}
