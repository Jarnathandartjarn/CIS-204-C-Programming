// Jonathan Falvo
// Chpt 14 PA

#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
   	int dataVal;
       	struct IntNode_struct* nextNodePtr;
        } 	IntNode;

        // Allocate a node for initData
        IntNode* IntNode_Create (int initData) {
           	IntNode* newNode = (IntNode*)malloc(sizeof(IntNode));
               	newNode->dataVal = initData;
                   	newNode->nextNodePtr = NULL;
                       	return newNode;
                        }

                        /* Insert newNode after node.
                           Before: thisNode -- next
                              After:  thisNode -- newNode -- next
                              */
                              void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode) {
                                 	IntNode* tmpNext = NULL;

                                       	tmpNext = thisNode->nextNodePtr;                  
                                           	thisNode->nextNodePtr = newNode;                
                                               	newNode->nextNodePtr = tmpNext;                
                                                }

                                                // Print dataVal
                                                void IntNode_PrintNodeData(IntNode* thisNode) {
                                                   	printf("%d ", thisNode->dataVal);
                                                    }

                                                    // Grab location pointed by nextNodePtr
                                                    IntNode* IntNode_GetNext(IntNode* thisNode) {
                                                       	return thisNode->nextNodePtr;
                                                        }

                                                        /********* New functions ********/

                                                        // Return the length of the list
                                                        int IntNode_Length(IntNode* firstNode) {
                                                           	int length = 0;
                                                               	IntNode* currentNode = firstNode;
                                                                   	while(currentNode != NULL) {
                                                                          	++length;
                                                                                  	currentNode = IntNode_GetNext(currentNode);
                                                                                       	}

                                                                                           	return length;
                                                                                            }
                                                                                            //////////////////////////////////////////////////////////////////////////////////////////////
                                                                                            // Return the Nth element of the list. First node is 1.
                                                                                            IntNode* IntNode_GetNth(IntNode* firstNode, int pos) {
                                                                                               	IntNode* currentNode = firstNode;
                                                                                                   	int i;

                                                                                                       	for (i = 1; i < pos && currentNode != NULL; ++i) {
                                                                                                              	currentNode = IntNode_GetNext(currentNode);
                                                                                                                   	}

                                                                                                                       	return currentNode;
                                                                                                                        }

                                                                                                                        // Print the entire list starting at firstNode
                                                                                                                        void IntNode_PrintList(IntNode* firstNode) {
                                                                                                                           	IntNode* currentNode = firstNode;
                                                                                                                               	while (currentNode != NULL) {
                                                                                                                                      	IntNode_PrintNodeData(currentNode);
                                                                                                                                              	currentNode = IntNode_GetNext(currentNode);
                                                                                                                                                   	}
                                                                                                                                                    }

                                                                                                                                                    // Sum the numbers in the list
                                                                                                                                                    int IntNode_SumList(IntNode* firstNode) {
                                                                                                                                                       	int sum = 0;
                                                                                                                                                           	IntNode* currentNode = firstNode;
                                                                                                                                                               	while (currentNode != NULL) {
                                                                                                                                                                      	sum += currentNode->dataVal;
                                                                                                                                                                              	currentNode = IntNode_GetNext(currentNode);
                                                                                                                                                                                   	}

                                                                                                                                                                                       	return sum;
                                                                                                                                                                                        }
                                                                                                                                                                                        //////////////////////////////////////////////////////////////////////////////////////////////

                                                                                                                                                                                        int main(void) {
                                                                                                                                                                                           	IntNode* firstNode = NULL;
                                                                                                                                                                                               	IntNode* lastNode = NULL;
                                                                                                                                                                                                   	IntNode* newNode = NULL;
                                                                                                                                                                                                       	IntNode* curNode = NULL;
                                                                                                                                                                                                           	int listSize; 				// how many integers to read
                                                                                                                                                                                                               	int increment;				// increment between consecutive node values
                                                                                                                                                                                                                   	int firstNum;				// first node value

                                                                                                                                                                                                                       	// New node for newNum will be inserted after position newPos (first node = 1)
                                                                                                                                                                                                                           	int newPos;
                                                                                                                                                                                                                               	int newNum;

                                                                                                                                                                                                                                   	int i;

                                                                                                                                                                                                                                       	// Input:
                                                                                                                                                                                                                                           	printf("Enter list size: ");
                                                                                                                                                                                                                                               	scanf("%d", &listSize);
                                                                                                                                                                                                                                                   	printf("Enter first number: ");
                                                                                                                                                                                                                                                       	scanf("%d", &firstNum);
                                                                                                                                                                                                                                                           	printf("Enter increment size: ");
                                                                                                                                                                                                                                                               	scanf("%d",