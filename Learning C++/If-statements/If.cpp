#include <iostream>
#include <string>
   using namespace std;

   int main() {
   
   int x = 1;
   int y = 2;
   int time = 999;
   
      if (10 > 1) {
      
      cout << "10 is greater than 1\n"; 
    }
    //false so no output!
    if  ( x > y) {
    
      cout << "X is greater than y\n";
    }
    //true so an output!
     if  ( x < y) {
    
      cout << "X is greater than y\n";
    }
    
    if(time < 2) {
    
      cout << "Hola"; //999 is not < 2! so it will not output!
    } else {
      
      cout << "Hello, I am the greater value!\n"; //outputs this as true because 999 > 2
    }
    
    if( time < 2) {  //999 > 2 so no output!
      
      cout << "Hola";
   } else if (time < 800) { //999 > 800 so no output!
   
      cout << "Hello";
   } else {
   
      cout << "No true if statements then!\n"; //Since no statements are true, we output this!
   }
   
   //Short-hand way of writing out if statements!
   string result = (time < 2) ? "Hola" : "Juice";
   
      cout << result;
      
      
      return 0;
      
  }