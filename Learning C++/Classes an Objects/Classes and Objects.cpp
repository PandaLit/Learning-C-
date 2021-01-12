#include <iostream>
#include <string>

   using namespace std;
   
      class MyClass { //the class
      
         public: //access specifier, spcifies the attributes and methods of class accesable from outside
         
         
         //attributes of the class
            int myNum; 
            string myString;
        //Mutiple attributes
            string artists;
            int year;
            void myMethod2(); //define what you will use first! And it can work down below!
       //you can add parameters!
         int sad(int saddness);
      
       //can also use void to define the inside class  
            void myMethod() {
            cout << "Artists: \n";
      
          }
          
     };
     //can also use void outside of class
     
     void MyClass::myMethod2() {
         cout << "2019 \n";
      }
     int MyClass::sad(int saddness) {
      return saddness;
    }
        
        int main () {
        
         MyClass myObj; //creates an object of the orginal class to be accessed
        
            myObj.myNum = 999; //access of attributes 
            myObj.myString = "Juice Wrld";
            myObj.artists = "Lil Peep, ";
            myObj.year = 2017;
            myObj.myMethod();
            myObj.myMethod2();
           
          cout << myObj.myNum << "\n";
          cout << myObj.myString << "\n";
          cout << myObj.artists << myObj.year << "\n";
          cout << myObj.sad(10);
          return 0;
      }