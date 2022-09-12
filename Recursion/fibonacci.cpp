#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n<=1) return n;
    else return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    if(n<0)
    {
        cout<<"No is less than zero";
    }
    else{
        cout<<fibo(n);
    }

    return 0;
}