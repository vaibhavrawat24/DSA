//Print the subsequence with sum k

//Time complexity:
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

void subseq(int arr[],vector<int> ds,int idx,int s,int sum,int n)
{
    if(idx==n)
    {
        if(s==sum)
        {
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    //pick or take case
    ds.push_back(arr[idx]);
    s+=arr[idx];
    subseq(arr,ds,idx+1,s,sum,n);
    s-=arr[idx];
    ds.pop_back();

    //not pick or not take
    subseq(arr,ds,idx+1,s,sum,n);
}
 
int main(){
    int arr[]={1,2,1};
    int sum=2;
    vector<int> ds;

    subseq(arr,ds,0,0,sum,3);
 
    return 0;
}