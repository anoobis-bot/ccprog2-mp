/******************************************
File Name: box_imp.c

Author: Francis Zaccharie B. de Leon
Last Update: May 18, 2022

This file constains the function 
implementations for the GUI of the 
different modes the dex has
******************************************/

// include files
#include "../configurations.h"
#include "../header/definitions.h"
#include "../protoypes/util_proto.h"
#include "../header/art.h"


/* This functioncreates the GUI for the main menu
    it returns what the user selected
        - it can be fakedex database
        - Explore
        - Box
        - Settings                                 */
void main_menu(string65 sInput)
{
    int currRow;

    // declaring string variables
    string65 sUsrInput;
    int nInputArrSize = sizeof(sUsrInput)/sizeof(sUsrInput[0]);   // storing the array size of sInput to var nInputArrSize

    // Input validation
    int Input_Fail;

    // message that would be sent to the user at the bottom screen
    string65 sMessage = "";
    int nMsgArrSize = sizeof(sMessage)/sizeof(sMessage[0]); // storing the array size of sMessage to var nMsgArrSize

    
    do {
        printf(CLEAR);
        printf("\n");

        // prints top part of the box
        printHeader(HDR_FakeDex);

        // prints main content of the box
        for (currRow = 0; currRow < HEIGHT; currRow++)
        {
            printLeftStart();
            printRightRemain(0);
        }

        // prints bottom part of the box
        printRemark(sMessage);
        sMessage[0] = '\0';     // cleaning the sMessage array because it will be reused.

        // getInput returns if the user input is valid or not.
        // refer to getInput implementation (util.c) for the list of possible error msg returns
        Input_Fail = getInput(sInput, nInputArrSize, sMessage, nMsgArrSize);

    } while (Input_Fail);
}