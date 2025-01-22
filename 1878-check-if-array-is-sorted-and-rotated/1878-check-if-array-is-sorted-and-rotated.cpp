class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotation_count = 0;
        
        for (int i = 0; i < n; i++) {
            // Check if the current element is greater than the next (mod n for circular comparison)
            if (nums[i] > nums[(i + 1) % n]) {
                rotation_count++;
            }
            // If there is more than one rotation point, it's not sorted or rotated
            if (rotation_count > 1) {
                return false;
            }
        }
        return true; // It's sorted and rotated or simply sorted
    }
};
