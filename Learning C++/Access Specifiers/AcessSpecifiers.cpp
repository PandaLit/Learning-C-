#include <iostream>

   using namespace std;
   
   
   class MyClass {
   
      private: //Encapsulation to allow private to be seen to have better control of data
         int salary;
         
      public: //accessible from outside of class, if public is not specified then everything is private automadically
      
         int x;
         void setSalry(int s) {
            salary = s;
        }
        
        int getSalary() {
         return salary;
       }
      private:
         int y;
         
         
     };
     
     
     
     int main() {
     
     
      MyClass myO;
      
      myO.x = 999;
      //myO.y = 1; //outputs y = private and cant be accessed or viewed outside of class
      myO.setSalry(100000);
      
      cout << myO.getSalary();
      cout << "\n";
      cout << myO.x;
      
     return 0;
     
   }