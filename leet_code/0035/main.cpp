
int my_binary_search(vector<int>& nums, const int& start, const int& end, const int& target)
{
    int mid = (start + end) / 2;    
    cout << start << ' ' << mid << ' ' << end << endl;
    
    if (nums[end] < target)
    {
        //cout << nums[end] << ' ' << target << endl;
        return end+1;
    }

    if (nums[mid] == target)
        return mid;
    else if (start > mid)
        return start;
    else if (end < mid)
        return end+1;
    
    if (nums[mid] > target)
        return my_binary_search(nums, start, mid, target);
    else if (nums[mid] < target)
        return my_binary_search(nums, mid, end, target);
    
    return -99;
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return my_binary_search(nums, 0, nums.size()-1, target);   
    }
};