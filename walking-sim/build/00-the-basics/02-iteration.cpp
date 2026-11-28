/*this was for solving an easy leetcode problem; no issues solving it with Python (English), but solving it with C++ (Latin)...
oh boy my brain hurts*/

#include <vector> 
#include <unordered_map>

using namespace std; //i HATE having to repeat the std namespace, so saying this early prevents me from having to repeat myself

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> cache; //declares an empty list with two integer values

        for (int i = 0; i < nums.size(); ++i) { /* setting parameters for iterators in C++ is insane wth!!
                                                the scope of an iterator is set normally, though you have to declare & initialize i
                                               ++i updates the iteration value before any other values tied to it */
            int comp = target - nums[i]; //finds the current iteration value's complimentary value

            if (cache.find(comp) != cache.end()) { //checks if the complimentary value has been cached already
                return {cache[comp], i}; //returns the complimentary value's index and the current value's index
            }

            cache[nums[i]] = i; //keys the index to the value... what a weird sentence
        }

        return {}; //returns an empty solution in case no solution exists
    }
};
