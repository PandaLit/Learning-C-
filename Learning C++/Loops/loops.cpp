#include <iostream>


   using namespace std;
   
      int main() {
      
         for( int i = 0; i <= 10; i = i + 2) //starts at 0, i will be less than or equal to 10 while stopping at 10
                                             //i + 2 is where we icrease two at a time until we hit our 10 number
         {
         
            cout << i << "\n";
         }
         
         for (int o = 0; o < 10; o++) {
         
            if (o == 4) { //breaks the for loop into asking for the first 4 numbers ==
               break;
         }
         
               cout << o << "\n";
         }
         
         
         for (int p = 0; p < 10; p++) {
            
            if (p == 4) { //breaks the for loop into asking for the first 4 numbers ==
               continue; //continue breaks the iteration in the loop and continues with next iteration
         }
         
               cout << p << "\n";
              
         }
         
         return 0;
      
      
      }