#include <iostream>
using namespace std;

  // Create a function with a default value, as in, if no value is given, then use this value.
void currentOrganelle(string organelle = "Golgi Apparatus") {
  cout << organelle << endl;
}

void milesToMeters(double &x) {
  x = x / 0.00062137;
}

double rbcCount(double myRBC[5]) {
  double avg;
  for (int i = 0 ; i < 5; i++) {
    avg += myRBC[i];
  }
  avg = avg / 5;
  return avg;
}

int main() {
  currentOrganelle(); // Outputs Golgi Apparatus
  currentOrganelle("Vesicle"); // Outputs Vesicle
  cout << endl;
// Example of a function using pass by reference, which allows it to change original parameter values.
  double inputValue;
  cout << "Input your value in miles: " << endl;
  cin >> inputValue;
  milesToMeters(inputValue);
  cout << "Your input is " << inputValue << " meters" << endl;
// Now the original value has changed from miles to meteres without having to create a new variable.

// You can also pass arrays to a function.  
  double myRBC[5] = {4.56, 4.68, 4.70, 4.71, 4.71};
  cout << endl;
  cout << "Your average red blood cell count (in trillions) is " << rbcCount(myRBC) << endl;
  // Output is: Your average red blood cell count (in trillions) is 4.672
  return 0;
}
