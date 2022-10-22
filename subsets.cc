class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> subset;
        dfs(nums, 0, subsets, subset);
        return subsets;
    }
    
    void dfs(vector<int>& nums, int index, vector<vector<int>>& subsets, vector<int>& curr_subset) {
        if (index > nums.size()-1) {
            subsets.push_back(curr_subset);
            return;
        }

        dfs(nums, index+1, subsets, curr_subset);

        curr_subset.push_back(nums[index]);
        dfs(nums, index+1, subsets, curr_subset);
        curr_subset.erase(curr_subset.end()-1);

        return;
    }
};
