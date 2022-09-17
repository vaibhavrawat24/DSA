//Given an array till n find the xor of all elements using bit manipulation

//Time Complexity: O(1)

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;

    if(n%4==1) cout<<1<<endl;
    else if(n%4==2) cout<<n+1<<endl;
    else if(n%4==3) cout<<0<<endl;
    else if(n%4==0) cout<<n<<endl;
 
    return 0;
}