//time Complexity: O(log max(a,b))

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;

    return gcd(b%a,a);
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
}