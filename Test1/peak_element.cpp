class Solution
{
public:
    // int binary_search(vector<int> nums,int st , int end){
    //     // int mid = end-(st-end)/2;
    //     int mid = (end+st)/2;
    //     if(st>=end){
    //         return st;
    //     }
    //     if((nums[mid]>nums[mid-1]) && (nums[mid]>nums[mid+1])){
    //         return mid;
    //     }
    //     if((nums[mid]-nums[st])<(mid-st)){
    //         end = mid-1;
    //         return binary_search(nums,st,end);
    //     }
    //     else if((nums[end]-nums[mid])>=(end-mid)){
    //         st = mid;
    //         return binary_search(nums,st,end);
    //     }
    //     return -1;
    // }
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return 0;
        }
        if ((n > 1) && (nums[n - 1] > nums[n - 2]))
        {
            return n - 1;
        }
        if (nums[0] > nums[1])
        {
            return 0;
        }
        // int ans = binary_search(nums , 0 , n);
        // return ans;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                return i;
            }
        }
        return -1;
    }
};