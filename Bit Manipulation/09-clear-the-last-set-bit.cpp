//Clear last set bit using bit manipulation

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;

    cout<<(n&(n-1))<<endl;
 
    return 0;
}