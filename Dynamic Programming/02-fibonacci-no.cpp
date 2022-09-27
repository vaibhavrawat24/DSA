//Fibonacci Number using dp

//Approach 1 : Memoization

//Time Complexity: O(n) as we make calls for value from 1 to n only once.
//Space Complexity: O(n) as we use an array to store values of recursive calls

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int fib(int n,vector<int> dp)
{
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];

    return dp[n]= fib(n-1,dp)+fib(n-2,dp);
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);

    cout<<fib(n,dp)<<endl;
 
    return 0;
}

 
//Approach 2: Tabulation

//Time Complexity: O(n)
//Space Complexity: O(n)

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// #define pb push_back

// int fib(int n)
// {
//     vector<int> dp(n+1);

//     dp[0]=0;
//     dp[1]=1;

//     for(int i=2;i<=n;i++)
//     {
//         dp[i]=dp[i-1]+dp[i-2];
//     }

//     return dp[n];
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
 
//     return 0;
// }

//Optimizing space to O(1)

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// #define pb push_back

// int fib(int n)
// {
//     int a=0,b=1,c;

//     for(int i=2;i<=n;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }

//     return b;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
 
//     return 0;
// }
