#include "Exo2.h"

#include <iostream>
using namespace std;

void DisplayBook(const Book* book) {
	cout << "Title : " << book->title << endl;
	cout << "Author : " << book->author << endl;
	cout << "Year : " << book->year << endl;
	cout << "Price : " << book->price << "$" << endl;
}

void DisplayLibrary(Library* library) {
	for (int i = 0; i < library->length; i++) {
		DisplayBook(library->collection[i]);
	}
}

void AddBook(Book* book, Library* library) {
	library->length++;
	library->collection = (Book**)realloc(library->collection,sizeof(Book**) * library->length);
	library->collection[library->length-1] = book;
}

Book* FindBookByTitle(const char* title, Library* library) {
	for (int i = 0; i < library->length; i++) {
		if (library->collection[i]->title == title) {
			return library->collection[i];
		}
	}
}

void Exercice2() {
	Library general{"General Library"};

	Book book0{ "Jorick Le Malandrin", "Collin.CO", 1985, 0.5 };
	AddBook(&book0, &general);
	Book book1{ "Une Histoire Du Pakistan", "Collin.CO", 1989, 0.85 };
	AddBook(&book1, &general);

	cout << endl << "FOUNDED BOOK : " << endl;
	Book* found = FindBookByTitle("Une Histoire Du Pakistan", &general);
	DisplayBook(found);

	cout << endl << "DRAW ENTIRE LIBRARY : " << endl;
	DisplayLibrary(&general);
}