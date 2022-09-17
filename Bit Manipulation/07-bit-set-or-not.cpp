//Check if the i'th bit in a no. is set or not

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,i;
    cin>>n>>i;

    bool set=n&(1<<(i-1));
    
    if(set) cout<<"set"<<endl;
    else cout<<"not set"<<endl;
 
    return 0;
}