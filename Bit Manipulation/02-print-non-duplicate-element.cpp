//Given an array, print the number with non duplicate

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x^v[i];
    }

    cout<<x<<endl;
 
    return 0;
}