#include "pch.h"
#include "useful_stuff.h"

void parseData(FILE* finput, FILE* foutput) {
	finput = fopen("exemplu.in","r");
	foutput = fopen("date.in", "w");
	char buffer[60];
	char name[30];
	while (!feof(finput)) {
		fscanf(finput, "%s", buffer);
		if (buffer[0] == '[' && (buffer[1] == 'W' || buffer[1] == 'B' || buffer[1] == 'R') && buffer[6] != 'E' && buffer[2] != 'o') {
			fgets(name, 30, finput);
			fprintf(foutput, "%s", name);
		}
	}
}