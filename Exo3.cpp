#include "Exo3.h"

#include <iostream>
using namespace std;

void AddMovie(Movie* movie, Director* director) {
	director->length++;
	director->work = (Movie**)realloc(director->work, sizeof(Movie**) * director->length);
	director->work[director->length - 1] = movie;
}

void DisplayFilms(Director* director) {
	for (int i = 0; i < director->length; i++) {
		if (director->work[i]) {
			cout << director->work[i]->title;
		}
	}
}

int CountFilmsByGenre(char* genre, Director* director) {
	int count = 0;
	for (int i = 0; i < director->length; i++) {
		if (director->work[i]->genre == genre) {
			count++;
		}
	}
	return count;
}

void Exercice3() {
	Director director0{ "Jorick.Crinot" };
	Director director1{ "Collin.CO" };

	Movie movie0{ "Jorick Le Malandrin", "Autobiographie", 2077, 90 };
	AddMovie(&movie0, &director0);

	Movie movie1{ "Histoire Du Pakistan", "Voyage", 2021, 120 };
	AddMovie(&movie0, &director1);

	DisplayFilms(&director1);
}