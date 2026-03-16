// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }
  
// print calculator///

// #include <iostream>
// using namespace std;
// int main() {
//   cout << "enter number1: ";
//   int number1;
//   cin >> number1;
//   cout << "enter number2: ";
//   int number2;
//   cin >> number2;
//   cout << "sum is: " << number1 + number2 << endl;
//   cout << "subtraction is: " << number1 - number2 << endl;
//   cout << "multiplication is: " << number1 * number2 << endl;
//   if (number2 != 0) {
//     cout << "division is: " << number1 / (double)number2 << endl;
//   } else {
//     cout << "division by zero is not allowed." << endl;
//   }
// }

////////  if and else question??? find character lowercase or upper case

// #include <iostream>
// using namespace std;
// int main() {
//   char ch;
//   cout << "enter character: ";
//   cin >> ch;
//   if (ch >= 'a' && ch <= 'z') {
//     cout << "lowercase letter" << endl;
//   } else {
//     cout << "uppercase letter" << endl;
//   }

// }

// find character lowercase or upppercase by (A to Z)
// #include <iostream>
// using namespace std;
// int main() {
//   char ch;
//   cout << "enter character: ";
//   cin >> ch;
//   if (ch >= '65' && ch <= '90') {
//     cout << "uppercase letter" << endl;
//   } else {
//     cout << "lowercase letter" << endl;
//   }
// }
 
// find no is negative or positive  
// #include <iostream>
// using namespace std;
// int main() {
//   int n = -45;
//   cout << (n > 0 ? "positive" : "negative") << endl;
//   return 0 ;  

// }



//// print 1 to 20 using while loop



// #include <iostream>
// using namespace std;
// int main() {
//   int n = 20;
//   int i = 1;

//   while(i <= n){
//     cout << i << " ";
//     i++;
//   }

//   cout << endl;
//   return 0;
// }


/// print 1 to 10 using for loop



// #include <iostream>
// using namespace std;
// int main() {
//   int n =10; 
//   for(int i=1; i <= n; i++){
//     cout << i << " ";
//   }
//   return 0;
// }

//// ///// sum of first n natural numbers using for loop????


// #include <iostream>
// using namespace std;
// int main() {
//   int n =10;
//   int sum = 0;
//   for (int i=1; i<=n; i++){
//     sum+=i;
//   }
//   cout << "sum is: " << sum << endl;
//   return 0;
// }

/// sum of first n natural numbers using while loop????
// #include <iostream>
// using namespace std;
// int main() {
//   int n =10;
//   int sum = 0;
//   int i =1;
//   while(i <= n){
//     sum+=i;
//     i++;
//   }
//   cout << "sum is: " << sum << endl;
//   return 0;
// }


/// sum of first n odd numbers using for loop????  #method is only foe odd numbers
// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   int sum =0;
//   for (int i = 1 ; i<=n; i += 2){
//     sum+=i;
//    }
//     cout << "sum is: " << sum << endl;
//   return 0;
// }



/// sum of first n even numbers using for loop????
// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   int sum =0;
//   for (int i = 1 ; i<=n; i++ ){
//      if (i % 2 == 0) 
//     sum+=i;
//    }
//     cout << "sum is: " << sum << endl;
//   return 0;
// }


/// check prime number or not????
// #include <iostream>
// using namespace std;
// int main() {
//   int n = 7;
//   for (int i =2; i<=n-1; i++){
//     if (n % i == 0){
//       cout << "not a prime number" << endl;
//       return 0;
//     }
//   }
  
//     cout << "prime number" << endl;
  
//   return 0;
// }


/// print square pattern of * ????
// #include <iostream>
// using namespace std;
// int main() {
//   int n =4;

//   for (int i = 1; i<=n; i++){  //outer

//     for (int j = 1; j<= n; j++){ //inner
//       cout << "*"<< " ";
//     }

//     cout << endl;
//   }

//   return 0;
// }



/// print square pattern of characters ????
// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   for (int i = 0; i<n; i++){
//     char ch = 'A';
//     for (int j = 0; j < n; j++){
//       cout << ch;
//       ch = ch + 1;
//     }
//     cout << endl;
//   }

//   return 0;
// }     /// output
        // A B C D
        // A B C D
        // A B C D
        // A B C D


/// print square pattern of numbers ????
// #include <iostream>
// using namespace std;
// int main() {
//   int n = 3;
//   int num = 1;
//   for (int i = 1; i<=n; i++){
//     for (int j = 1; j <=n; j++){
//       cout << num << " ";
//       num++;
//     }
//     cout << endl;
// }
//   return 0;
// }
// / output
// 1 2 3
// 4 5 6
// 7 8 9

/// print square pattern of continuous characters ????
// #include <iostream>
// using namespace std;
// int main() {
//   char  n = 3;
//   char  num = 'A';
//   for (int i =0; i<n ; i++){
//     for (int j = 0; j < n; j++){
//       cout << num << " ";
//       num++;
//     }
//     cout << endl;
//   }

//   return 0;
// }
/// output
// A B C
// D E F
// G H I



/// print right angled triangle pattern of * ????

// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   for (int i =1; i<=n ; i++){
//     for (int j = 1; j <= i; j++){
//       cout << "*"<< " ";
      
//     }
//     cout << endl;
//   }

//   return 0;
// } // output
    // *
    // * *
    // * * *
    // * * * *


// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   for (int i =0; i<n ; i++){
//     for (int j = 0; j < i+1; j++){
//       cout << (i+1) << " ";

//     }
//     cout << endl;
//   }
//   return 0;
// } ///output
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4


/// print right angled triangle pattern of continuous characters ????

// #include <iostream>
// using namespace std;
// int main() {
//   int n = 4;
//   int ch = 'A';
//   for (int i =0; i<n ; i++){
//     for (int j = 0; j < i+1; j++){
//       cout << (char)(ch+i) << " ";

//     }
//     cout << endl;
//   }

//   return 0;

// }  ///output
    // A 
    // B B 
    // C C C 
    // D D D D

/// print right angled triangle pattern of continuous characters ????
// #include <iostream>
// using namespace std;
// int main() {
//   char n = 4;
//   char num = 'A';
//   for (int i =0; i<n ; i++){
//     for (int j = 0; j < i+1; j++){
//       cout << num << " ";
//       num++;

//     }
//     cout << endl;
//   }

//   return 0;
// }

/// output
    // A 
    // B C 
    // D E F 
    // G H I J

    /// print right angled triangle pattern of numbers in reverse order ????
// #include <iostream>
// using namespace std;
// int main (){
//   int n =4;
//   for (int i =0;i<n; i++){
//     for (int j= i+1; j>0; j--){
//       cout << j << " ";
//     }
//     cout << endl;

//   } 
//   return 0;
// }
// }/// output
    // 1 
    // 2 1 
    // 3 2 1 
    // 4 3 2 1



//// print right angled triangle pattern of numbers with spaces ????
//     #include <iostream>
// using namespace std;
// int main () {
//   int n =4;
//   for(int i =0; i<n; i++){
//       // spaces
//     for (int j =0; j<i; j++){
//       cout << " ";
  
//     }
// // numbers
//     for (int j =0; j<n-i; j++){
//       cout <<  (i+1) ;
  
//     }
//     cout <<endl;
//   }
//   return 0;
// } /// output
    // 1111
    //  222
    //   33
    //    4

/// print pyramid pattern of numbers ????
// #include <iostream>
// using namespace std;
// int main () {
//   int n =4;

//   for(int i =0; i<n; i++){
//     //spaces : n-i-1
//     for (int j =0; j<n-i-1; j++){
//       cout << " ";
//     }
//     // numbers
//     for (int j = 1; j<=i+1; j++){
//       cout <<  j;
//     }
//     //nums2
//     for (int j = i; j>0; j--){
//       cout << j;
//     }
//     cout <<endl;
//   }
//   return 0;
// } /// output
    //    1
    //   121
    //  12321
    // 1234321



// #include <iostream>
// using namespace std;
// int main(){
//   int n = 4;
//   for (int i =0; i <n; i++){
//     //spaces
//     for(int j=0; j<n-i-1; j++){
//       cout<< "  ";
//     }

//     cout<< "*";
//       if (i!=0){
//         //spaces
//         for (int j=0; j<2*i-1; j++){
//           cout<< "  ";
//         }
//         cout<< "*";

//       }
//       cout << endl;
//   }
//   //bottom
//   for (int i =0; i < n-1; i++){
//     //spaces
//     for (int j=0; j<i+1; j++){
//       cout<< "  ";
//     }

//     cout<< "*";
//       if (i!= n-2){
//         //spaces
//         for (int j=0; j<2*(n-i)-5; j++){
//           cout<< "  ";
//         }
//         cout<< "*";

//       }
//       cout << endl;
//   }
//   return 0;
// } /// output
    //       *
    //     *   *
    //   *       *
    // *           *
    //   *       *
    //     *   *
    //       *





// #include <iostream>
// using namespace std;
// int main(){
//   int n =4;
//   for (int i=1; i<=n; i++){
//     //
//     for (int j =1; j<=i;j++){
//       cout << "*";
//     }
//     //
//     for (int j =0; j<=2*(n-i); j++){
//       cout << " ";
//     }

//     for (int j =1; j<=i;j++){
//       cout << "*";
//     }
//     cout << endl;
//   }
//     // lower half
//     for(int i =n; i>=1; i--){
//       //
//       for (int j =1; j<=i;j++){
//         cout << "*";
//       }
//       //
//       for (int j =1; j<=2*(n-i); j++){
//         cout << " ";
//       }

//       for (int j =1; j<=i;j++){
//         cout << "*";
//       }
//     cout << endl;
//   }
//   return 0;
// }  // output
    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *




    //function
//sum of 2 no.
#include <iostream>
using namespace std;
int sum(int a, int b){
  int sum= a + b;
  return sum;
}

// min of 2 no.
int min(int a, int b){
  if (a<b){
    return a;
  } else {
    return b;

  }
}
// calculate the sum of 1 to N
int sumN(int n){
  int sum = 0;
  for (int i = 1; i<=n; i++){
    sum+=i;
  }
  return sum;
}
//calculate n factorial

int factorial(int n){
  int fact = 1;
  for (int i =1; i<=n; i++){
    fact*=i;
  }
  return fact;
}

//pass by value
void changeX (int x){
  x=2*x;
  cout <<"x = " << x << endl;
}
// int main(){
//   int x = 5;
//   changeX(x);
//   cout << "x =" <<x <<endl;
//   return 0;
// } // output
   // x =10
   // x =5

// sum of no 
int sumofDigits(int num){
  int digSum = 0;
  while(num >0){
    int lastDig = num %10;
    num = num /10;
    digSum += lastDig;
  }
  return digSum;
}
// int main(){
//   cout << "sum = " << sumofDigits(2356) << endl;
//   return 0;
// }

// calculate ncr binomial cofficient of n and r

int nCr(int n, int r){
  int num = factorial(n);
  int denom = factorial(r) * factorial(n - r);
  return num / denom;
}
// int main(){
//   int n =5;
//   int r =2;
//   cout << "nCr = " << nCr(n, r) << endl;
//   return 0;
// }

