#include <iostream>
#include <vector>
#include <algorithm>  // for std::max
using namespace std;

int longestCommonSubstring(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int maxLength = 0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                maxLength=max(dp[i][j],maxLength);
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    return maxLength;
}

int main() {
    string string1 = "abcde";
    string string2 = "bcdf";
    
    int result = longestCommonSubstring(string1, string2);
    cout << "The length of the longest common substring is: " << result << endl;

    return 0;
}
