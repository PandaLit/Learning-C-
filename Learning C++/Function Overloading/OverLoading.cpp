#include <iostream>



   using namespace std;


   int plusFunction(int x, int y) {
   
         return x + y;
         
    }
    
    double plusFunctionDouble( double x, double y) {
    
    
         return x + y;
         
   }
   
      int main() {
      
         int myNum1 = plusFunction(8,5);
         double myNum2 = plusFunctionDouble(3.2, 2.2);
         
         cout << "Int: " << myNum1 << "\n";
         cout << "Double: " << myNum2;
         
            return 0;
        }