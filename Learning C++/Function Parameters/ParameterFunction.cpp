#include <iostream>
#include <string>



   using namespace std;
   
   
   void myFunction(string name = "Steve") { //makesn a default parameter

   
   
      cout << name << " Skasko\n";
      
      
   }
   
      int main () {
         
         
          myFunction("Stephen");
          myFunction("Jenny");
          myFunction(); //adds the string inside
          myFunction("Anja");
                 
     return 0;
     
    }
    