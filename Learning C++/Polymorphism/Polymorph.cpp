#include <iostream>
#include <string>
 
 
 
 //Polymorphism is in many forms and means it lets ingeritance to inherit many attributes and methods from other classses
 //and uses those methods to perform different tasks and perform a single actin in different ways 
  using namespace std;
  
  
      class school {
         public:
            void graduations() {
               cout << "The graduation of many forms\n";
             }
          };
          
          class GraduationForms : public school {
            public: 
               void graduations() {
                  cout << "Graduation: Pre-School, Middle-School, High-School\n";
                  
                  }
               };
               
               class college: public school {
                  public:
                  void collegeGraduation () {
                     cout << "Undergraduate-School, Graduate-School\n";
                  }
                 };
             int main() {
             
               school mySchool;
               GraduationForms myGraduation;
               college myCollege;
               
               mySchool.graduations();
               myGraduation.graduations();
               myCollege.collegeGraduation();
            
             return 0;
            }   