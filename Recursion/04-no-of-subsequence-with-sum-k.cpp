////Print total no. of subsequence with sum k

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime(int n)
{
    vector<int> prime(n+1,true);
    prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i) prime[j]=false;
        }
    }
    if(prime[n]==true) return true;
    else return false;
}

int subseq(int arr[],int sum,int s,int idx,int n)
{
    if(idx==n)
    {
        if(s==sum) return 1;
        return 0;
    } 

    //take or pick

    s+=arr[idx];
    int l=subseq(arr,sum,s,idx+1,n);
    s-=arr[idx];

    //not take or not pick
    int r=subseq(arr,sum,s,idx+1,n);

    return l+r;
}
 
int main(){
    int arr[]={1,2,1};
    int sum=2;

    cout<<subseq(arr,sum,0,0,3);
 
    return 0;
}