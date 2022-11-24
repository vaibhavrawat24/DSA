//Print one subsequence with sum k

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

bool subseq(vector<int> ds,int arr[],int sum,int s,int idx,int n)
{
    if(idx==n)
    {
        if(s==sum)
        {
            for(auto it:ds) cout<<it<<" ";
            return true;
        }
        return false;
    } 

    //take or pick
    ds.push_back(arr[idx]);
    s+=arr[idx];
    if(subseq(ds,arr,sum,s,idx+1,n)==true) return true;
    s-=arr[idx];
    ds.pop_back();

    //not take or not pick
    if(subseq(ds,arr,sum,s,idx+1,n)==true) return true;

    return false;
}
 
int main(){
    int arr[]={1,2,1};
    vector<int> ds;
    int sum=2;

    subseq(ds,arr,sum,0,0,3);
 
    return 0;
}