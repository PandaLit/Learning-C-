#include <iostream>
#include <fstream> //used to create, reads and write files, like in ofstream (creates and writes files)/ifstream (read files)
#include <string>

      using namespace std;
      
         int main() {
         
            ofstream MyFile("filename.txt");
            
               MyFile << "What am I doing with my life";
               
               MyFile.close(); //elps clean up unnecessary memory space
            
            
            string myText;
            
            
            ifstream MyReadFile("filename.txt"); //reads in the files text
            
            while(getline(MyReadFile, myText)) { //while getline reads the line by line!
            
               cout << myText;
            }
            
            
            MyReadFile.close(); //closes the file
          }
          