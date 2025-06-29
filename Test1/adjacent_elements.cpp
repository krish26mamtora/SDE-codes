class Solution
{
public:
    // int binary_search(vector<int>& nums, int st ,int end ,int target,int index1,int index2){
    //     int mid = end-(st+end)/2;//check
    //     if(nums[mid]==target){
    //         if(nums[mid+1]!=target){
    //             index2 = mid+1;
    //         }
    //         if(nums[mid-1]!=target){
    //             index1 = mid+1;
    //         }
    //     }
    //     if(nums[i]<target){
    //         end = mid-1;
    //         return binary_search(nums,st,end,target);
    //     }
    //     else if(nums[i]>target){
    //         st = mid+1;
    //          return binary_search(nums,st,end,target);
    //     }
    //     return -1;
    // }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int st = -1;
        int end = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                st = i;
                break;
            }
        }
        if (st == -1)
        {
            return {-1, -1};
        }
        for (int i = st; i < nums.size(); i++)
        {
            if (nums[i] != target)
            {
                end = i - 1;
                break;
            }
        }
        return {st, end};
    }
};