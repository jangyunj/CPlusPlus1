#include <iostream>

class Solution
{
public:
    std::vector<int> runningSum(std::vector<int> &nums)
    {
        std::vector<int> results(nums.size());
        results[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            results[i] = nums[i] + results[i - 1];
        }
        return results;
    }
};

// std::vector is dynamic sequence containers (arrays) that can change in size as elements are added
// std::array is fixed sized and cannot be resized once initialized
// variable that points to an address of another variable and not its value. When creating a pointer, use an asterisk (*); when determining the address of the variable, the ampersand (&), or the address-of operator, will display this value.
