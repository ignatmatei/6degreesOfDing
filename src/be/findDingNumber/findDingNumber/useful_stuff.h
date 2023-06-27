#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct playerInfo {
	char* lname;
	char* fname;
};
struct playerInfo playerInfo;
struct hashElement
{
	playerInfo info;
	struct hashElement* next;
};
typedef struct hashElement hashElement;
int parseData(FILE*, FILE*);