#include <iostream>


   using namespace std;
   
      void myFuction() { //void means that it wont return a value unless called inside the main method 
      
      
         cout << "Hello";
       }
         
     int main() {
     
      myFuction();
      myFuction(); //called again and again! 
      
      return 0;
    }
      