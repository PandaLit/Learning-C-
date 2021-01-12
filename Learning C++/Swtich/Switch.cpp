#include <iostream>


   using namespace std;
   
      int main () {
      
         int song = 3; //choose the case you want
         
         switch (song) {
         
            case 1: //cases define what is underneath
               cout << "Days";
               break;
            case 2: 
               cout << "Blink";
               break;
            //case 3:
               cout << "Crybaby";
               break;
            case 4:
               cout << "Wishing";
               break;
            case 5:
               cout << "Animal";
               break;
            default: //runs code if there is no case classified 
                cout << "Lil Peep";
               
         }
         
         
         return 0;
      
      
      }