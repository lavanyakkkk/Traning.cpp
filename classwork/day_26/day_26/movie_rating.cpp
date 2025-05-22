/*Q2.Movie Rating System
Problem:
Create a class Movie with members: title, genre, rating (out of 10). Write functions to accept movie details and another function to print "Hit", "Average", or "Flop" based on the rating*/

#include <iostream>
#include <cstring>
using namespace std;
class MovieRate {
public:
	char title[20];
	char genre[20];
	int rate;
	void setTitle(const char* t) {
		strcpy(title,t);
	}
	const char* getTitle() {
		return title;
	}
	void setGenre(const char* g) {
		strcpy(genre, g);
	}
	const char* getGenre() {
		return genre;
	}
	void setRate(int r) {
		rate = r;
	}
	int getRate() {
		return rate;
	}
	void movieDetails() {
		cout << "enter the movie tittle: " << endl;
		cin.getline(title, 20);
		cout << "enter the genre: " << endl;
		cin.getline(genre, 20);
		cout << "enter the rate: " << endl;
		cin >> rate;
		
	}
	void givingDetails() {
		if (rate >= 8 && rate <= 10) {
			cout << "the " << title << " movie was hit" << endl;
		}
		else if (rate >= 6 && rate < 8) {
			cout << "the " << title << " movie was average" << endl;
		}
		else {
			cout << "the " << title << "movie was flop" << endl;
		}
	}
};
int main() {
	MovieRate movie;

	// Accept movie details from user
	movie.movieDetails();

	// Print movie rating category
	movie.givingDetails();

	return 0;
}
