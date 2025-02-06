class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        int tuple = 0;
        sort(begin(nums), end(nums));
        for(int i = 0; i < n; i++){
            for(int j = n-1; j > i; j--){
                unordered_set<int>st;
                int product = nums[i] * nums[j];
                for(int k = i+1; k < j; k++){
                    int num = product % nums[k];
                    if(num == 0){
                        int digit = product/nums[k];
                        if(st.count(digit)){
                            tuple++;
                        }
                        st.insert(nums[k]);
                    }
                }
            }
        }
        return tuple * 8;
        
    }
};