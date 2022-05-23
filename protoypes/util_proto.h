/******************************************
File Name: art_proto.h

Author: Francis Zaccharie B. de Leon
Last Update: May 22, 2022

This file contains the function prototypes
of the functions in util.c file
******************************************/

#ifndef UTIL_PROTO_H
#define UTIL_PROTO_H

#include "../header/array_sizes.h"
#include "../configurations.h"

void printSpace(int nNumSpace);
void printLeftStart();
void printRightRemain(int nContentLen);
void printBottomRemain(int currRow);
void printFillerLines(int nQuantity, int *currRow);
void printHeader(char sArtText[][WIDTH]);
void printRemark(char *sMessage);
int getInput(char *sInput, int nInputSize, char sChoices[][STR_CHOICES_SIZE], int nChoicesSize, char *sErrorFeedBack);
void printChoices(char sChoices[][STR_CHOICES_SIZE], int numElem, int column, int row, char format, int *boxHeight);
void printText(char *sTempText, char format, int *currRow);

#endif