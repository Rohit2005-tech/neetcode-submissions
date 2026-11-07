#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> values(nums.begin(), nums.end());
        return values.size() != nums.size();
    }
};