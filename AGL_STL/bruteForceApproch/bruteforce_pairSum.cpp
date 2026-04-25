#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class pairsum_bruteForce
{
    public:
    vector<int> pairsum(vector<int> &nums, int target)
    {
        vector<int> result;

        for (size_t i = 0; i < nums.size(); i++)
        {
            for (size_t j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    pairsum_bruteForce obj_pairsum_bruteForce;
    vector<int> result = obj_pairsum_bruteForce.pairsum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to " << target << ": ";
        cout << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two numbers add up to " << target << "." << endl;
    }
    return 0;
   
}