#ifndef SORTED_LIST_H
#define SORTED_LIST_H
/*
 * sorted-list.h
 */

#include <stdlib.h>


/* Used to act as our data for the list with pointers to its adjacent 
   data Nodes */
typedef struct Node Node;
struct Node {
	char *token;
	Record head;
	Node *parent;
	Node *left;
	Node *right;

};

typedef struct Record_ Record;
struct Record_ {

	char *fileName;
	int occurrences;
	Record *next;
	Record *prev;
};


struct SortedList
{
	Node *head;
};
typedef struct SortedList* SortedListPtr;


void recordRecord(Node node, char *filename);



void initializeSL(){
int insertToken(char *token, char *filename);
int SLInsert(SortedListPtr list, void *newObj);






#endif
