#include <iostream>


   using namespace std;
   
   
      int main () {
         
         int i = 0; //starts where you want the loop to begin!
         
         while ( i < 10) { //this loop runs 10 times through 0-9!
         
            cout << i << "\n";
            
       i++;
        
      
      }
      
      int o = 0;
      
      do { //do will always execute once and if its true then it will execute the while loops too!
      
         cout << o << "\n"; 
         o++;
      }
      
      while ( o > 10); //since this is not true, the do above outputs only 0
      
      return 0;
      
      }
      
     