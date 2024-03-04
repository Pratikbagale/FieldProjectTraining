#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(const vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1])
        {

            // The peak must be in the left half,including mid

            right = mid;
        }
        else
        {
            // The peak must be in the right half,excluding mid

            left = mid + 1;
        }
    }

    // At the end of the loop left and right will be equal,representing  the peak element's index

    return left;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1}; // Example input

    int peakIndex = findPeakElement(nums);

    cout << "Peak element index: " << peakIndex << endl;
    return 0;
}
