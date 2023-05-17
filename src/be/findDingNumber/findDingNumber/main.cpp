#include "pch.h"
#include"useful_stuff.h"

int main()
{
	FILE* fin= NULL;
	FILE* fout = NULL;
	FILE* f3;
	int noOfPlayers = parseData(fin, fout), a[20][20], i = 0;
	char firstName[20], lastName[20], result[4], gol[10];
	printf("%d \n", noOfPlayers);
	f3 = fopen("date.txt", "r+");
	    while(i < 2){
		fscanf(f3, "%s,", lastName);
		fgets(firstName, 20, f3);
		strcpy(firstName, firstName + 1);
		firstName[strlen(firstName) - 2] = '\0';
		lastName[strlen(lastName) - 1] = '\0';
		printf("%s %s\n", lastName, firstName);
		i++;
		fscanf(f3, "%s,", lastName);
		fgets(firstName, 20, f3);
		strcpy(firstName, firstName + 1);
		firstName[strlen(firstName) - 2] = '\0';
		lastName[strlen(lastName) - 1] = '\0';
		printf("%s %s\n", lastName, firstName);
		i++;
		fgets(result, 4, f3);
		printf("%s\n", result);
	}
	return 0;
}
