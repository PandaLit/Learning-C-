#include <iostream>
#include <string>

   using namespace std;


   int main () {
      
      
      int x = 1;
      int y = 2;
      int z = x + y;
      string c = "1";
      string b = "2"; //when using string to add numbers, "" must be used or throws an error!
      string a = c + b;
      string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYQQQQQQQQQQQ";
      txt = 'Z'; //changes the txt above 
      string firstName = "Stephen ";
      string lastName = "S\n";
      string fullName = firstName + " " +  lastName;
      string fullName2 = firstName.append(lastName); //Append spaces it
      
      cout << fullName;
      cout << fullName2 << "\n";
      cout << z << "\n";
      cout << a;
      cout << "\nThe length of txt string: " << txt.size(); //size = length of the text
      cout << "\n" << txt[0]; //lets you pick out of the string!
      cout << "\n" << txt[0];
      cout << "\n" << txt;
      return 0;
   
   
   }