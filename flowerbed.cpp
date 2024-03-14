
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     bool canPlaceFlowers(vector<int> & flowerbed, int n)
//     {
//         int sz = flowerbed.size();

//         int cnt = 0;

//         for (int i = 0; i < sz; ++i)
//         {
//             if (flowerbed[i] == 0)
//             {

//                 bool lft = false, rgt = false;
//                 if (i == 0 || flowerbed[i - 1] == 0)
//                     lft = true;

//                 if (i == sz - 1 || flowerbed[i + 1] == 0)
//                     rgt = true;

//                 if (lft && rgt)
//                 {

//                     flowerbed[i] = 1;
//                     cnt++;

//                     lft = true;

//                     if (i == sz - 1 || flowerbed[i + 1] == 0)
//                         rgt = true;

//                     if (lft && rgt)
//                     {
//                         flowerbed[i] = 1;
//                         cnt++;
//                     }
//                 }
//             }
//             return (cnt >= n);
//         }
//     }
// }

#include <bits/stdc++.h>

using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int sz = flowerbed.size();
    int cnt = 0;

    for (int i = 0; i < sz; ++i)
    {
        if (flowerbed[i] == 0)
        {
            bool lft = (i == 0 || flowerbed[i - 1] == 0);
            bool rgt = (i == sz - 1 || flowerbed[i + 1] == 0);

            if (lft && rgt)
            {
                flowerbed[i] = 1;
                cnt++;

                // Move the check for the next position inside the block
                if (i == sz - 1 || flowerbed[i + 1] == 0)
                {
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
        }
    }

    // Move the return statement outside the for loop
    return (cnt >= n);
}

int main()
{
    // You can use the function here to test it with different flowerbeds and values of n
    return 0;
}
