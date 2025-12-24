// swap max and min of an array
#include <iostream>
using namespace std;
  int main() {
    int nums [] = { 5, 15 , 22, -15 , 24};
    int size = 5;
    int smallest = nums[0];  //assume first ellement is min
    int largest = nums[0]; // assume first ellement is max
    int minIndex =0;
    int maxIndex =0;
    for (int i=0; i< size; i++){
      if (nums[i] < smallest){
        smallest = nums[i];
        minIndex = i;
      }
      if (nums[i] > largest){
        largest = nums[i];
        maxIndex = i;
      }
  }
    // swap

    swap (nums[smallest] , nums[largest]);

    cout << "Array after swapping min and max: " << endl;
    for (int i =0; i<size; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

 return 0;
}