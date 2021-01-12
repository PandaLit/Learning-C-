#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <stdexcept>


   using namespace std;
   
   string to_roman(int n) {
   
      if (n <= 0) {
      
         throw out_of_range("Romans don't have negatives");
         
      }
      
      else if (n > 1e6) {
      
         throw out_of_range("Number is too big to bother with");
         
      }
      
      vector < pair < int, string>> mapping = {
         {1000, "M"} , {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"},
    {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
      
      string numeral; 
      for(auto p:mapping) {
         while (n >= p.first) {
            numeral += p.second;
            
             n -= p.first;
             
       }
      }
         return numeral;
     }
      
      
      int main() {
      
      int n;
      
      cout << "Enter an integer:\n";
  cin >> n;
  try {
    cout << n << " is " << to_roman(n) << '\n';
  } catch (out_of_range e) {
    cout << "unprocessable: " << e.what() << '\n';
    return -1;
  }
}