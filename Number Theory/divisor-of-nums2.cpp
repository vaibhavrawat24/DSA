//Time Complexity: O(n log n) //Faster than last one

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n+1);

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            v[j]++;
    }

    for(int i=1;i<=n;i++){
        cout<<v[i]<<endl;
    }
    }
}