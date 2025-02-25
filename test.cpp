#include <iostream>
#include "counter.h"  // Modify the path to where counter.h is located

using namespace std;

int main() {
    // Create a loop to test the counter function multiple times
    cout << "Starting counter testbench..." << endl;

    for (int i = 0; i < 10; ++i) {  // Test for 10 cycles
        int result = counter();
        cout << "Counter value at cycle " << i + 1 << ": " << result << endl;
    }

    return 0;
}
