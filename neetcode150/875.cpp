#include <bits/stdc++.h>
using namespace std;\

int main()
{
    vector<int> piles = {3,6,7,11};
    int h = 4;
}


class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

//              1       11
        while (left < right)
        {
            int speed = left + (right - left) / 2; // 1 + (11 - 1) / 2 = 1 + 10/2 = 1 + 5 = 6

            long long hours = 0;

            for (int bananas : piles)
            {
                //0 + (3 + 6 - 1) / 6 =  8 / 6 = 
                hours += (bananas + speed - 1) / speed;
            }

            if (hours <= h)
            {
                right = speed;
            }
            else
            {
                left = speed + 1;
            }
        }

        return left;
    }
};
