//Given two no.s l,r find xor from l to r using bit manipulation

//Time Complexity: o(1)

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int find_xor(int n)
{
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%2==2) return n+1;
    else if(n%4==3) return 0;
}

int main(){
    int l,r;
    cin>>l>>r;
    cout<<"Xor from "<<l<<" to "<<r<<" is : "<<(find_xor(r)^find_xor(l-1))<<endl;
 
    return 0;
}