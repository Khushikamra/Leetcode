class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans = 0;
        int n = colors.size();
        for(int i = 0; i<n; i++){
            int prev = i-1;
            if(i == 0){
                prev = n-1;
            }
            int next = i+1;
            if(i == n-1){
                next = 0;
            }
            if(colors[i] != colors[prev] && colors[i] != colors[next]){
                ans++;
            }
        }
        return ans;
    }
};