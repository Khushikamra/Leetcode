class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        //If candies is less than children
        long long sum = 0;
        for(int i = 0; i < candies.size(); i++){
            sum += candies[i];
        }
        if(sum < k){
            return 0;
        }

        int min = 1;
        int maxi = *max_element(candies.begin(), candies.end());
        int ans = 0;
        while(min <= maxi){
            long long mid = min + (maxi - min) / 2;
            long long count = 0;
            for(int i = 0; i < candies.size(); i++){
                count += candies[i] / mid;
            }
            if(count < k){
                maxi = mid - 1;
            }
            else {
                ans = mid;
                min = mid + 1;
            }
        }
        return ans;
        
    }
};