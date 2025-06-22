// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
private:
    int binary_search(int st, int end)
    {
        if (st > end)
        {
            return -1;
        }
        int mid = st + (end - st) / 2;
        if (isBadVersion(mid) && (mid == 1 || !isBadVersion(mid - 1)))
        {
            return mid;
        }
        else if (!isBadVersion(mid))
        {
            return binary_search(mid + 1, end);
        }
        else
        {
            return binary_search(st, mid - 1);
        }
    }

public:
    int firstBadVersion(int n)
    {
        return binary_search(1, n);
    }
};