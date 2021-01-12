#include <iostream>
#include <string>



   using namespace std;
 
 void swapNums(int &x, int &y) {     
   int z = x;
   x = y;
   y = z;
   
 }
 
  int main () {

    int num1 = 1;
    int num2 = 5;
         
      cout << "Before Swapping: " << num1 << ", " << num2 << "\n";
          
            swapNums(num1, num2);
            cout << "After swap: " << num1 << ", " << num2;
   return 0;
   
 }