#include <iostream>

using namespace std;

int main() {
  int numDataSets;
  cin >> numDataSets;

  for (int i = 0; i < numDataSets; i++) {

    int brainsEaten, brainsNeeded;
    cin >> brainsEaten >> brainsNeeded;


    string result;
    if (brainsEaten >= brainsNeeded) {
      result = "MMM BRAINS";
    } else {
      result = "NO BRAINS";
    }

    cout << result << endl;
  }

  return 0;
}