#pragma once

struct Director;

struct Movie {
	const char* title;
	const char* genre;
	int year;
	int duration;
	Director* director;
};

struct Director {
	const char* name;
	Movie** work;
	int length;
};

void Exercice3();