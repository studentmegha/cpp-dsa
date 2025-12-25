#include <iostream>
#include <vector>
using namespace std;
void reversevector(vector<int> &vec , int sz){ 
    int start = 0;
    int end = sz-1;
    while ( start <end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
    int main(){
        vector <int> vec = {10,45,67,89,23};
        int sz = vec.size();
        reversevector(vec, sz);
        for (int i = 0; i < sz; i++){
            cout << vec[i] << " ";
        }
        
    return 0;
    }

