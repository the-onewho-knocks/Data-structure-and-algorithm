#include<bits/stdc++.h>
using namespace std;

int water(vector<int>height){
    return 0;
}

int main(){
    vector<int> heights = {4,2,0,3,2,5};
    int n = heights.size();

    int left = 0;
    int right = n - 1;
    int water = 0;
    int leftmax = 0;
    int rightmax = 0;

    while(left < right){
        
        //this checks where the opration is going to be performed
        if(heights[left] <= heights[right]){

            if(heights[left] > leftmax){
                leftmax = max(leftmax , heights[left]);
            }
            else{
                water = water + leftmax - heights[left];
            }

            left++;
        }
        else{
            if(heights[left] >= heights[right]){
                if(heights[right] > rightmax){
                    rightmax = max(rightmax , heights[right]);
                }
                else{
                    water = water + rightmax - heights[right];
                }
            }

            right--;
        }
    }

    cout<<water<<endl;
}

// Here is the step-by-step dry run of your Trapping Rain Water algorithm in paragraph form using the input `height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]`.

// ---

// ## Initial Setup

// We initialize `left = 0`, `right = 11`, `leftmax = 0`, `rightmax = 0`, and `water = 0`. The loop continues as long as `left < right`.

// ---
// ## Step-by-Step Execution

// * **Iteration 1 (`left = 0`, `right = 11`):**
// Since `height[0]` (0) is less than or equal to `height[11]` (1), we enter the `left` branch. `height[0]` (0) is not greater than `leftmax` (0), so we update `water += 0 - 0` (water stays **0**). We then increment `left` to `1`.
// * **Iteration 2 (`left = 1`, `right = 11`):**
// `height[1]` (1) is less than or equal to `height[11]` (1). `height[1]` (1) is greater than `leftmax` (0), so we update `leftmax = 1`. No water is added (water stays **0**). We increment `left` to `2`.
// * **Iteration 3 (`left = 2`, `right = 11`):**
// `height[2]` (0) is less than or equal to `height[11]` (1). `height[2]` (0) is not greater than `leftmax` (1), so we calculate `water += 1 - 0`. Total water is now **1**. We increment `left` to `3`.
// * **Iteration 4 (`left = 3`, `right = 11`):**
// `height[3]` (2) is strictly greater than `height[11]` (1), so we jump to the `else` branch. `rightmax` (0) is less than `height[11]` (1), so we update `rightmax = 1`. No water is added (water stays **1**). We decrement `right` to `10`.
// * **Iteration 5 (`left = 3`, `right = 10`):**
// `height[3]` (2) is less than or equal to `height[10]` (2). `height[3]` (2) is greater than `leftmax` (1), so we update `leftmax = 2`. Water stays **1**. We increment `left` to `4`.
// * **Iteration 6 (`left = 4`, `right = 10`):**
// `height[4]` (1) is less than or equal to `height[10]` (2). `height[4]` (1) is not greater than `leftmax` (2), so we calculate `water += 2 - 1`. Total water becomes **2**. We increment `left` to `5`.
// * **Iteration 7 (`left = 5`, `right = 10`):**
// `height[5]` (0) is less than or equal to `height[10]` (2). `height[5]` (0) is not greater than `leftmax` (2), so we calculate `water += 2 - 0`. Total water becomes **4**. We increment `left` to `6`.
// * **Iteration 8 (`left = 6`, `right = 10`):**
// `height[6]` (1) is less than or equal to `height[10]` (2). `height[6]` (1) is not greater than `leftmax` (2), so we calculate `water += 2 - 1`. Total water becomes **5**. We increment `left` to `7`.
// * **Iteration 9 (`left = 7`, `right = 10`):**
// `height[7]` (3) is strictly greater than `height[10]` (2), so we take the `else` branch. `rightmax` (1) is less than `height[10]` (2), so we update `rightmax = 2`. Water stays **5**. We decrement `right` to `9`.
// * **Iteration 10 (`left = 7`, `right = 9`):**
// `height[7]` (3) is strictly greater than `height[9]` (1), taking the `else` branch. `rightmax` (2) is not less than `height[9]` (1), so we add trapped water: `water += 2 - 1`. Total water becomes **6**. We decrement `right` to `8`.
// * **Iteration 11 (`left = 7`, `right = 8`):**
// `height[7]` (3) is strictly greater than `height[8]` (2), taking the `else` branch. `rightmax` (2) is not less than `height[8]` (2), so we calculate `water += 2 - 2`. Water stays **6**. We decrement `right` to `7`.

// ---

// ## Conclusion

// At this stage, `left` equals `7` and `right` equals `7`. The condition `left < right` fails, and the loop terminates.

// The final accumulated **`water` is 6**.