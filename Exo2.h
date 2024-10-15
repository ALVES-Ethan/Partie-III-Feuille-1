#pragma once

struct Book {
	const char* title;
	const char* author;
	int year;
	double price;
};

struct Library {
	const char* name;
	Book** collection;
	int length;
};

void Exercice2();