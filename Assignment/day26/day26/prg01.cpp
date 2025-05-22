/*Digital Clock Simulation
Problem :
Create a class DigitalClock with members hour, minute, and second.Add a function function tick() that increments the time by one second and handles overflow.*/

#include <iostream>
using namespace std;
class DigitalClock {
private:
	int hour;
	int minute;
	int second;
public:
	void setHour(int h) { //setting the hour value 
		hour = h;
	}
	int getHour() {
		return hour;  //getting the present hour value
	}
	void setMinute(int m) { //setting the minute value
		minute = m;
	}
	int getMinute() {  //getting the present minute value
		return minute;
	}
	void setSecond(int s) { //setting the second value
		second = s;
	}
	int getSecond() { //getting the present second value
		return second;
	}
	void tick() {
		second++;
		if (second >= 60) {
			second = 0;
			minute++;
		}
		if (minute >= 60) {
			minute = 0;
			hour++;
		}
		if (hour >= 24) {
			hour = 0;
		}
	}
	// Getting time input from the user
	void clockDetails() {
		cout << "Enter hour : "; //getting the hour input
		cin >> hour;

		cout << "Enter minute: "; //getting the minute input
		cin >> minute;

		cout << "Enter second : "; //getting the second input
		cin >> second;
	}
	void displayTime() {
		cout << hour << ":" << minute << ":" << second << endl;
	}
};
int main() {

	DigitalClock clock;
	clock.clockDetails();
	clock.displayTime();
	return 0;


}