#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player {
	char* lname;
	char* fname;
	int id;
};

typedef struct Player PLayer;

int parseData(FILE*, FILE*);