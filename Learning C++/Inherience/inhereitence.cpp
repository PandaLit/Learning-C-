#include <iostream>
#include <string>


   using namespace std;
   
   //base class, or the parent class that being inherited
   class anime { 
      public: 
         string anime = "Naruto";
      void number() {
         cout << "1\n";
      }
     };
     //is the derived class, is child class that inherits from another class!
     class anime2: public anime { 
         public:
            string name = "Narutoo";
       };
    //Mutilevel derived class, inherience
     class anime3: public anime2 {
     
      void myotherfunction() {
         cout << "More More Naruto!\n";
      }
    };

       int main() {
       
       
         anime2 my;
         anime3 my2;
            my.number();
         
            cout << my.anime + " " + my.name + " ";
            my2.number();
            
            return 0;
            
        }
       
       
      
      