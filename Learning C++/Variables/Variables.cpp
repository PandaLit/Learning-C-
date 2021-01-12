#include <iostream>

 using namespace std;
 
   int main() {
   
   //Just Like Java!
   
      int myNum = 15;
      int x = 10;
      int y = 20;
      int z = 10;
      int sum = x+y;
      
  //Identifier 
      int pizzaperpie = 8;
      int p = 8;
   //So when you dont want to overwrite your existing values, use const!
      const int myNum2 = 999;
   /* Gives read-only variable saying cant change myNum2 basically
      myNum2 = 666;
   */
      const float PI = 3.14;
   
    //In here we can overwrite a value! LIKE WHAAA
      myNum = 30;
         cout << myNum;
         cout << " , I am not " << myNum << " years old.\n";
         cout << sum;
         cout << "\n" << x+y+x << "\n";
         cout << pizzaperpie << "\n";
         cout << p;
         cout << "\n" << myNum2;
         cout << "\n" << PI;
      return 0;
      
   }