// // brute force 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector <int>& nums) {
    int n = nums.size();
    for (int i=0 ; i<n; i++){
        int count =0 ;
        for (int j =0 ; j<n; j++){
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n/2){
            return nums[i];
        }
    }
}

// // optimised 

int majorityElement(vector<int>& nums ) {
    sort( nums.begin(), nums.end());
    return nums[nums.size()/2];




    return 0;
}

int majorityElement (vector<int>&nums){
    int freq =0 , ans =0;
    for (int i =0 ; i<nums.size(); i++){
        if (freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else {
            freq--;
        }
    }

return ans;
}
 int main(){
    vector<int> nums= {2,2,1,2,3,2,2};
    cout<< "majorityElement:" << majorityElement(nums);
}
