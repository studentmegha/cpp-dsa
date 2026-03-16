//write a program to print sum of two numbers
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
    // int main (){
    //     int a , b;
    //     cin >> a >> b;
    //     int sum = (a+b);
    //     int product = (a*b);
    //     cout << sum << " " << product ;
    //     return 0;

    // }

     //wap to calculate simple interest  and compound interst .
     // the principle ,amount , rate of interest and time are entered through the key+board 

    //  int main (){
    //     double P ,R ,T;
    //     cin >> P >> R >> T;
    //     double SI = ( P* R*T)/100;
    //     double CI = P *pow( (1 + R/100), T)- P;
    //     cout << "SI =" << SI << endl;
    //     cout << "CI =" << CI << endl;
    //     return 0;

    //  }

    // write the program to enter  the tempereatuire in celcius(c) then count it into ferehenite.
    // int main() {
    //     float celcius , fahrenheit;
    //     cin >> celcius;
    //     fahrenheit = ((celcius * 9/5)+32);
    //     cout<< "temp in fahrenheit="<< fahrenheit;
    //     return 0;
    // } 

    // write the program to swap number taking the help of third variable

    // #include <iostream>
    // #include<cmath>
    // using namespace std;
    // int main(){
    //     int a, b,num;
    //     cin >> a>> b;
    //     if(a<=b){
    //         cout << a << " " << b;

    //     }else {
    //         a=num;
    //         a=b;
    //         num = b;
    //         cout << a << " " << b;

    //     }
    //     return 0;

    // }

    // write a program   to convert decimal to binary
    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int n ;
    //     long long binary = 0;
    //     int place =1;
    //     cin >> n;
    //     while (n>0){
    //         int remainder = n% 2;
    //         binary = binary+ remainder *place;
    //         place *=10;
    //         n = n/2;
    //     }
    //     cout << binary;
    //     return 0;

    // }

    // 6 write a program 

    //pointer in c++
     int main(){
        int a = 10;
        int *ptr = &a;
        cout << ptr << endl;
        cout <<&a <<endl;
        return 0;
     }