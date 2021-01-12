#include <iostream>
#include <string> //import string class


   using namespace std;


   int main() {
      
      int myNum = 5;
      int x = 2;
      int y = 4;
   //Many more increments and decrements of all sorts
      ++x; //Increases x value!
      --y; //Decreases y value!
      x += 1; //Adds +1 to x value!
      x -= 1; //Subtracts -1 to x value!
      float myFloat = 9.99; //Digits up to 6 or 7
      double myDouble = 99.9999; //Digits up to 15
      char myLetter = 'S'; //character
      bool myBoolean = true; //Boolean
      string myString = "Hello"; //string
      
      
      
      
      cout << "Int: " << myNum << "\n";
      cout << "Float: " << myFloat << "\n";
      cout << "Double: " << myDouble << "\n";
      cout << "Letter: " << myLetter << "\n";
      cout << "Boolean: " << myBoolean << "\n";
      cout << "String: " << myString << "\n";
      cout << "Module: " << x % y << "\n";
      cout << "Increment: " << x << "\n";
      cout << "Decrement: " << y << "\n";
      cout << "Operator +=: " << x << "\n";
      cout << "Operator -=: " << x << "\n";
      cout << "Greater or less than: " << (x > y) << "\n"; //0 = false, 1 = true
      cout << "Equal to: " << (x == y) << "\n"; //True(1)! bc x = 3 y = 3
      cout << "&&: " << (x > 2 && y < 1) << "\n"; //True vs false again!
      cout << "||: " << (x > 2 || y < 1) << "\n"; //Returns True(1) because one of the two is correct!
      cout << "!: " << (!(x > 2 || y < 1)) << "\n"; //Returns false because ! means to reverse the results
      
      return 0;
   }