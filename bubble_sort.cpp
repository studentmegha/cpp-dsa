#include<iostream>
using namespace std;
void bublbleSort(int arr[] , int n){
    for (int i = 0; i<n-1; i++){
        for (int j = 0 ; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {3,4,6,5,7};
    int n = 5;
    bublbleSort(arr , n);
    cout << "Sorted array: ";
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
