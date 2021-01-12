#include <iostream>
using namespace std;

      // Base class
      class Anime  {
        protected:  // Protected access specifier
          int salary;
      };
      
      // Derived class
      class Programmer: public Anime {
        public:
          int bonus;
          void setSalary(int s) {
            salary = s;
          }
          int getSalary() {
            return salary;
          }
      };
      
      int main() {
        Programmer myObj;
        myObj.setSalary(1);
        myObj.bonus = 15;
        cout << "Salary: " << myObj.getSalary() << "\n";
        cout << "Bonus: " << myObj.bonus << "\n";
        return 0;
      }
      