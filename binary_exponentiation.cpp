#include <iostream>
using namespace std;

// function to calculate a^n using binary exponentiation
long long binaryExponentiation(long long a , long long binform){
    long long ans = 1;
    while (binform > 0){
        if ( binform % 2 == 1){
            ans *= a;
        }
        a *=a;
        binform/=2;


    }
    return ans;

}

    int main(){
        long long a, binform;
        cout << " Enter base and power :" ;
        cin >> a >> binform;
        cout << "ans: " <<
    binaryExponentiation(a,binform);
        return 0;

}

