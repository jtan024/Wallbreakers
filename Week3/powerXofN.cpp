class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
        {
            return 1.0;
        }
        else if (n > 0)
        {
            return x * myPow(x, n - 1);
        }
        else if (n < 0)
        {
            return (1 / x) * myPow(x, n + 1);
        }
        }
};