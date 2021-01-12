#include <iostream>

   using namespace std;
   
   
   int main() {
   
      try {
      
         int age = 20;
     if (age >= 18) {
     
      cout << "Access granted.\n";
      
    } else {
      throw(age); //can throw a refererence number error
   }
   }
   catch (int myNum) { //can do ... and handle any exception
      cout << "Access denied.\n";
      
      }
      
         return 0;
     }