//Count the ways to reach nth stairs, youre initially at 0th step, you can either count 1 step or couple steps.

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int steps(int n)
{
    if(n<=1) return n;

    return steps(n-1)+steps(n-2);
}

int main(){
    int n;
    cin>>n;

    cout<<steps(n)<<endl;
 
    return 0;
}
