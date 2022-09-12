#include<bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    
    if(n==0) return 1;
    int ans=power(x,n-1);
    
    
    
    return x*ans;
}

int main()
{
    int x,n;
    cout<<"Enter a number whose power is to be find : ";
    cin>>x;
    cout<<"Enter the nth term to which the power is be found : ";
    cin>>n;
    
    cout<<power(x,n);
    
    return 0;
}