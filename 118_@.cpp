#include <vector>
using namespace std;

class Solution {
public:
    vector<int> generateRow(int rows){
        long long ans = 1 ;
        vector<int> ansRow ;
        ansRow.push_back(1);
        for(int i=1; i<=rows; i++){
            ans = ans * (rows-i+1);
            ans = ans / i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final;
        for(int i=0; i<numRows ; i++){
            final.push_back(generateRow(i));
        }
        return final;
    }
};

class Solution
{
public:
    void swapnum(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (nums1[m] > nums2[n])
        {
            swap(nums1[m], nums2[n]);
        }
    }
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int len = n + m;
        int gap = (len / 2) + (len % 2);

        while (gap > 0)
        {
            int left = 0;
            int right = left + gap;
            while (right < len)
            {
                if (left >= m)
                {
                    swapnum(nums1, left - m, nums2, right - m);
                }
                else if (left < m && right >= m)
                {
                    swapnum(nums1, left, nums2, right - m);
                }
                else
                {
                    swapnum(nums1, left, nums2, right);
                }
                left++;
                right++;
            }
            if (gap == 1)
                break;
            gap = (gap / 2) + (gap % 2);
        }
    }
};
