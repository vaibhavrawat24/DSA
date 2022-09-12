//Time Complexity: O(n(log log(N)))

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> prime(n+1,true);
    prime[1]=false;

    for(int i=2;i<=n;i++) //i*i<=n for better time complexity
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i) //j=i*i for better time complexity O(n log(log(n)))
            {
                    prime[j]=false;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(prime[i]==true) cout<<i<<" is a prime no."<<endl;
        else cout<<i<<" is not a prime no."<<endl;
    }
   
    return 0;
}