#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {-1, 2, 1, -4};
    int target = 1;
    int ans;

    sort(v.begin(), v.end());

    for(int x : v)
    {
        cout << x << endl;
    }

    ans = v[0] + v[1] + v[2];

    for (int i = 0; i < v.size(); ++i)
    {
        int left = i + 1;
        int right = v.size() - 1;


        while (left < right)
        {
            int sum = v[i] + v[left] + v[right];
            if (abs(sum - target) < abs(ans - target ))
            {
                ans = sum;
                left++;
                right--;
            }
            else if (sum < target)
            {
                left++;
            }
            else if (sum > target)
            {
                right--;
            }
        }
    }
    cout<<ans<<endl;
}