//Time Complexity: O((2^n)*n)
//Space Complexity:O(n)

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

void pick_notpick(vector<int> ds,int arr[],int idx,int n)
{
    if(idx==n)
    {
        for(auto it:ds) cout<<it<<" ";
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }

    //not take condition, this element is not added to subsequence
    pick_notpick(ds,arr,idx+1,n);

    //take the particular index into the subsequence
    ds.push_back(arr[idx]);
    pick_notpick(ds,arr,idx+1,n);
    ds.pop_back();

}
 
int main(){
    int arr[]={3,1,2};
    vector<int> ds;

    pick_notpick(ds,arr,0,3);
 
    return 0;
}