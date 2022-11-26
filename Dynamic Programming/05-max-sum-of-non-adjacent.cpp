//Maximum sum of non adjacent elements
//Problem Link: https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261

//Approach 1: Memoisation (Top-down)

//Time Complexity: O(n)
//Space Complexity: O(n)+O(n) stack space + array space

#include <bits/stdc++.h> 
int f(int idx,vector<int>& nums,vector<int>& dp)
{
    if(idx==0) return nums[idx];
    if(idx<0) return 0;
    
    if(dp[idx]!=-1) return dp[idx];
    
    int pick=nums[idx]+f(idx-2,nums,dp);
    int not_pick=0+f(idx-1,nums,dp);
    
    return dp[idx]=max(pick,not_pick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    
    return f(n-1,nums,dp);
}

//Approach 2: Tabulation (Bottom-up)

//Time Complexity: O(n)
//Space Complexity: O(n)

#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    int prev=nums[0],prev2=0;
    
    for(int i=1;i<n;i++)
    {
        int take=nums[i];
        if(i>1) take+=prev2;
        
        int not_take=0+prev;
        
        int curi=max(take,not_take);
        prev2=prev;
        prev=curi;
    }
    
    return prev;
}