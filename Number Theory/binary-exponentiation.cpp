/* 

Binary Exponentiation or binpow
(a+b)%m=((a%m)+(b%m))%m
(a*b)%m=((a%m)*(b&m))%m
(a-b)%m=((a&m)-(b%m)+m)%m
(a^b)%m=   > if b is 0 return a % m
           > if b is even return (a^(b/2))^2
           > if b is odd return (a*(a^(b-1/2))^2)

*/
//Time Complexity : O(log b)

#include<bits/stdc++.h>
using namespace std;

int binpow(int a,int b,int m)
{
    if(b==0) return a%m;
    if(b%2==0)
    {
        int t=binpow(a,b/2,m);
        return (1ll * t * t % m);
    }
    else
    {
        int t=binpow(a,(b-1)/2,m);
        t=1ll * t * t % m;
        return (1ll * a * t % m);
    }
}

int main()
{
    int a,b,m;
    cin>>a>>b>>m;

    cout<<binpow(a,b,m)<<endl;

    return 0;
}