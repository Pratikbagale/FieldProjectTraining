#include <vector>
#include <iostream>

std::vector<int> productExceptSelf(std::vector<int> &nums)
{
    int n = nums.size();

    // Initialize left and right product arrays
    std::vector<int> leftProducts(n, 1);
    std::vector<int> rightProducts(n, 1);

    // Compute left products
    int leftProduct = 1;
    for (int i = 1; i < n; ++i)
    {
        leftProduct *= nums[i - 1];
        leftProducts[i] = leftProduct;
    }

    // Compute right products
    int rightProduct = 1; // Declare rightProduct here
    for (int i = n - 2; i >= 0; --i)
    {
        rightProduct *= nums[i + 1];
        rightProducts[i] = rightProduct;
    }

    // Compute the final result array
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i)
    {
        result[i] = leftProducts[i] * rightProducts[i];
    }

    return result;
}
