//Swap two numbers using bit manipulation

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<endl;

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
 
    return 0;
}