#include <iostream>
#include <string>



   using namespace std;
 

 
 
  int  myMath(int x) { //initualizes the x to the main! 5+main#
      return 5 + x;
  }
  int myMath2( int x, int y) { //mutiple parameters!
  
  
   return x + y; //shows what the calculation will do!
   
      
      
   }
   
    int main () {
    
    
          
          cout << myMath(1) << "\n"; //does 5 + 1 = 6!
          cout << myMath2(1, 5) << "\n"; //tells you what the x and y values are here!
          int z = myMath2(1, 5); //if you want to output one easy letter to represent the calculation!
          cout << z; //outputs the representation of the calculation above!
         
   return 0;
   
 }