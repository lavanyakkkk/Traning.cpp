#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// Function to convert hours into minutes and seconds
void convertTime(int hours, int& minutes, int& seconds) {
    // Convert hours to minutes
    minutes = hours * 60;

    // Convert minutes to seconds
    seconds = minutes * 60;
}

int main() {
    int h, min, sec;
    cout << "Enter hours: ";
    cin >> h;
    convertTime(h, min, sec);

    // Output the results
    cout << h << " hours is equal to " << min << " minutes." << endl;
    cout << h << " hours is equal to " << sec << " seconds." << endl;

    return 0;
}
