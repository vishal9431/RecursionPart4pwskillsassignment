// Given an integer array containing unique numbers, return power set, containing all the subsets of
// the set.
#include<iostream>
#include <vector>
using namespace std;
void helper(vector<int>v,int i,vector<int>subs,vector<vector<int>>&ans)
{
    if(i==v.size())
    {
        ans.push_back(subs);
        return;
    }
    subs.push_back(v[i]);
    helper(v,i+1,subs,ans);
    
    subs.pop_back();
    helper(v,i+1,subs,ans);

}
vector<vector<int>> subset(vector<int>&v)
{
    vector<int>sub;
    vector<vector<int>>ans;
    helper(v,0,sub,ans);
    return ans;
}
int main()
{
    vector<int>v={1,2,2};
    vector<vector<int>>ans=subset(v);
    int n= ans.size();
    int m= ans[0].size();
    for(int i=0;i<n;i++)
    {
        cout<<"[ ";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<" ]";
    }

}