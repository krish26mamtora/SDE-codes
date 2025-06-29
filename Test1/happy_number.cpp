class Solution
{
public:
    bool isHappy(int n)
    {
        while (n > 0)
        {
            int square = 0;
            while (n > 0)
            {
                int x = n % 10;
                square += (x * x);
                n /= 10;
            }
            if (square == 1)
            {
                return true;
            }
            else
            {
                return isHappy(square);
            }
        }
        return false;
    }
};