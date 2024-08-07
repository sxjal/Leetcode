// Given an array nums with n objects colored red, white, or blue, sort them 
//in-place so that objects of the same color are adjacent, with the colors in 
//the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.


// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums{1,3,4,2,2};

    
    for(int i = 0; i < nums.size(); i++){
        int index = abs(nums[i]);
        if(nums[index] < 0){
            cout<<index;
            break;
        }
        nums[index] *= -1;
    }

    // while(nums[0] != nums[nums[0]]){
    //     swap(nums[0], nums[nums[0]]);
    // }     
    // cout<< nums[0];
    
    return 0;
}


