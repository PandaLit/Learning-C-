#include <iostream>
   using namespace std;

         // Base class
         class MyClass {
           public:
             void anime() {
               cout << "Naruto\n" ;
             }
         };
         
         // Another base class
         class MyOtherClass {
           public:
             void anime2() {
               cout << "Narutoo\n" ;
             }
         };
         
         // Derived class
         class MyChildClass: public MyClass, public MyOtherClass 
         {
         };
         
         int main() {
         
           MyChildClass myObj;
           myObj.anime();
           myObj.anime2();
           return 0;
         }
         