class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &A)
    {
        int start = 0;
        int end = A.size() - 1;
        int middle = 0;
        while (start <= end)
        {
            middle = (start + end) / 2;
            if (A[middle] > A[middle + 1] && A[middle] > A[middle - 1])
            {
                return middle;
            }
            else if (A[middle] < A[middle + 1])
            {
                start = middle + 1;
            }
            else if (A[middle] < A[middle - 1])
            {
                end = middle - 1;
            }
        }
        return -1;
    }
};