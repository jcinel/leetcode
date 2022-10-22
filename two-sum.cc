// Link to Question: https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>

// Time:  O(n)
// Space: O(n)
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        int compliment = 0;
        std::vector<int> answer;
        std::unordered_map<int, int> seen_values;
        
        for (int i = 0; i < nums.size(); i++)
        {
            compliment = target-nums[i];
            std::unordered_map<int, int>::iterator iterator = 
                    seen_values.find(compliment);
            
            if (iterator != seen_values.end()) // if found
            {
                answer.push_back(iterator->second);
                answer.push_back(i);
                return answer;
            } 
            else 
                seen_values[ nums[i] ] = i;
        }
        
        return answer;
    }
};
