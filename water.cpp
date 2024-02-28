#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> &height)
{

    int n = height.size();
    int left = 0, right = n - 1;
    int maxWater = 0;

    while (left < right)
    {

        int hLeft = height[left];
        int hRight = height[right];
        int width = right - left;
        int h = min(hLeft, hRight);
        maxWater = max(maxWater, width * h);

        if (hLeft < hRight)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height);
    cout << result << endl;
    return 0;
}