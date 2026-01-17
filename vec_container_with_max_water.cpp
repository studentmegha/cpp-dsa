// brute force approach

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int maxArea (vector<int>& height){
    int n = height.size();
    int maxWater = 0;
    for ( int i =0; i<n; i++){
        for (int j = i+1; j<n; j++){
            int w = j-i;
            int h = min(height[i],height[j]);
            int currwater = w*h;
            maxWater = max(maxWater,currwater);
            
        }

    }
    return maxWater;
}

// optimised

int maxArr(vector<int>& height){
int n = height.size();
int maxWater  = 0;
int lp =0 ,rp = height.size()-1;
int (lp<rp);
int w =rp -lp;
int h = min(height[lp], height[rp]);
int currWater = w*h;
maxWater= max(maxWater , currWater);
height[lp]<height[rp]? lp++ : rp--;
}


int main(){
    vector<int> height= {1,2,6,4,9,7,8};
    cout <<maxArea(height);
    return 0;

}

