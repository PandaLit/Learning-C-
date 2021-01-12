#include <iostream>


   using namespace std;

   class MyClass { 
      
      public: 
      
         string anime;
         string character;
         int year;
         
         MyClass(string x, string y, int z) { //Parameter Constructor!
         
            anime = x;
            character = y;
            year = z;
      }
         MyClass() { //Can use a constrctor in a Class!
         
            cout << "999";
       }
     };
     
     
      int main() {
      
         MyClass ob;
         MyClass animeOb("\nNaruto", "One Piece", 2021);
         MyClass characterOb("Naruto", "Luffy", 2021);
         
         cout << animeOb.anime << ", " << animeOb.character << ", " << animeOb.year << "\n";
         cout << characterOb.anime << ", " << characterOb.character << ", " << characterOb.year << "\n";

            return 0;
            
        }