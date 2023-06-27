#include "pch.h"
#include"useful_stuff.h"

int main()
{
	FILE* fin= NULL;
	FILE* fout = NULL;
	FILE* f3;
	int noOfGames = parseData(fin, fout), a[20][20], i = 0, key , isPlayerAlreadyAdded;
	hashElement hashTable[26];
	char firstName[20], lastName[20], result[4], gol[10];
	printf("%d \n", noOfGames);
	f3 = fopen("date.txt", "r+");
	    while(i < noOfGames){
		isPlayerAlreadyAdded = 0;
		fscanf(f3, "%s,", lastName);
		fgets(firstName, 20, f3);
		strcpy(firstName, firstName + 1);
		firstName[strlen(firstName) - 2] = '\0';
		lastName[strlen(lastName) - 1] = '\0';
		printf("%s %s\n", lastName, firstName);
		key = lastName[0] - 65;
		while (hashTable[key].info.fname != NULL)
		{
			if (strcmp(hashTable[key].info.lname, lastName) == 0 && strcmp(hashTable[key].info.fname, firstName) == 0)
				isPlayerAlreadyAdded = 1;
			hashTable[key] = hashTable[key]->next;
		}
		isPlayerAlreadyAdded = 0;
		fscanf(f3, "%s,", lastName);
		fgets(firstName, 20, f3);
		strcpy(firstName, firstName + 1);
		firstName[strlen(firstName) - 2] = '\0';
		lastName[strlen(lastName) - 1] = '\0';
		printf("%s %s\n", lastName, firstName);
		fgets(result, 4, f3);
		printf("%s \n", result);
		fgets(gol, 10, f3);
		key = lastName[0] - 65;
		i++;
	}
	return 0;
}
