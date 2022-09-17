//Set i'th bit of a no.

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,i;
    cin>>n>>i;

    cout<<(n|(1<<(i-1)))<<endl;
 
    return 0;
}