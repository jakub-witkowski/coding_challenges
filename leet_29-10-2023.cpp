#include <vector>
#include <iostream>

class Solution
{
    public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> indices;

        bool pair_found = false;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (pair_found == true)
                    break;
                if (i == j)
                    continue;
                if (nums[i] + nums[j] == target)
                {
                    indices.push_back(i);
                    indices.push_back(j);
                    pair_found = true;
                }
            }
        }

        return indices;
    }
};

int main()
{
    std::vector<int> nums {3, 2, 4};
    int target{6};
    std::vector<int> indices;

    Solution solution;

    indices = solution.twoSum(nums, target);

    for (auto it : indices)
    {
        std::cout << it << " ";
    }

    return 0;
}