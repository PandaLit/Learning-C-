#include <iostream>
#include <string>



   using namespace std;
   
   int main() {
   
      string cars = "Tesla";
      string artists = "Juice Wrld";
       //The pointer variable can be int or string and * is what creates it to what variable we are working on 
      string* ptr = &artists;
      string food = "Rice";
      string &rice = food; //if you want a single reference then just recall it to this!
      
      
      cout << food << "\n";
      cout << rice << "\n"; 
      //& represents where the reference is created or a memory address
      cout << &cars << "\n"; //outputs 0x6dfed4
      cout << ptr << "\n"; //outputs 0x61fed4
      cout << *ptr << "\n"; //outputs Juice Wrld, what is in the memory called a Dereference Operator
      *ptr = "Lil Peep"; // replaces the memory to Lil Peep and outputs that
      cout << *ptr << "\n"; //outputs Lil Peep
     
      return 0;

   
   
   }