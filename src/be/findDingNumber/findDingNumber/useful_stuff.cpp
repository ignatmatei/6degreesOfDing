#include "pch.h"
#include "useful_stuff.h"

int parseData(FILE* finput, FILE* foutput) {
	finput = fopen("exemplu.in","r");
	foutput = fopen("date.txt", "w+");
	char buffer[40];
	char name[30];
	int i = 0;
	while (!feof(finput)) {
		fscanf(finput, "%s", buffer);
		if (buffer[0] == '[' && (buffer[1] == 'W' || buffer[1] == 'B' || buffer[1] == 'R') && buffer[6] != 'E' && buffer[2] != 'o') {
			fgets(name, 30, finput);
			strcpy(name, name + 2);
			name[strlen(name) - 2] = '\0';
			fprintf(foutput, "%s\n", name);
			i++;
		}
	}
	fclose(finput);
	fclose(foutput);
	return (i/3)*2;
}