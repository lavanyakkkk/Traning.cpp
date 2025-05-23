/*Flight Seat Reservation System
Objective: Create a class to manage flight seat reservations. Each flight has a seat count and a record of bookings.
*/



#include <iostream>
#include <cstring>
using namespace std;

class Flight {
private:
    char flightNum[50];
    int totalSeats;
    int bookedSeats;

public:
    
    Flight(const char* n, int t) {
        strcpy(flightNum, n);
        totalSeats = t;
        bookedSeats = 0; 
    }
    void setFlightNum(const char* n) {
        strcpy(flightNum, n);
    }
    const char* getFlightNum() {
        return flightNum;
    }
    void setTotalSeats(int t) {
        totalSeats = t;
    }
    int getTotalSeats() {
        return totalSeats;
    }
    void setBookedSeats(int b) {
        bookedSeats = b;
    }
    int getBookedSeats() {
        return bookedSeats;
    }
    void showAvailability() {
        int availableSeats = totalSeats - bookedSeats;
        cout << "Flight: " << flightNum << " | Seats Available: " << availableSeats << endl;
    }
    void bookSeats(int seats) {
        if (seats <= 0) {
            cout << "Invalid "<< seats << endl;
        }
        else if (seats > (totalSeats - bookedSeats)) {
            cout << "Booking Failed: Not enough seats." << endl;
        }
        else {
            bookedSeats += seats;
            cout << seats << " seats successfully booked." << endl;
        }
    }
};

int main() {
    Flight f1("AI203", 100);
    f1.bookSeats(30);

    f1.showAvailability();	
    f1.bookSeats(80);
   
        

    

    return 0;
}





