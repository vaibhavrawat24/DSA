//find if a no, is even or odd using bit manipulaton

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    if(n&1==1) cout<<"odd"<<endl;
    else cout<<"even"<<endl;
 
    return 0;
}