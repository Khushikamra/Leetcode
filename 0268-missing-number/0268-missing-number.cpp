class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m= nums.size();
        long long sum= m*(m+1)/2;
        long long sum2=0;
        for(int i=0; i<m; i++){
            sum2= sum2+nums[i];
        } 
        long long a = sum-sum2;
        return a;
    }
};