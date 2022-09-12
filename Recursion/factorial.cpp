#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n==0)
    {
        return 1;
    }
    int partialAns=f(n-1);
    return n*partialAns;
}

int main()
{
    int n;
    cout<<"Enter a no. :";
    cin>>n;
    
    if(n<0)
    {
        cout<<"No is less than zero";
    }
    else
    {
        cout<<f(n);
    }

    return 0;
}