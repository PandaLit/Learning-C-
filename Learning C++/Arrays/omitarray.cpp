#include <iostream>
#include <string>
using namespace std;

int main() {
  string artists[3]; //prints out all array but if you dont want to specify size of an array
                     // all you have to do is put string artists[] = { "" }!
  artists[0] = "Lil Peep";
  artists[1] = "Juice Wrld";
  artists[2] = "B";
  for(int i = 0; i < 3; i++) {
    cout << artists[i] << "\n";
  }
  return 0;
}
