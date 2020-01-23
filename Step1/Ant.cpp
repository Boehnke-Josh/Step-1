/**
 * \file Ant.cpp
 *
 * \author Joshua Boehnke
 */

#include <iostream>
#include "Ant.h"
using namespace std;

/**
     * Obtain Information from the user about this ant.
     *
     * Asks the user for the information that describes a ant.
     */

void CAnt::ObtainAntInformation()
{
    cout << endl;
    cout << "Input information about the Ant" << endl;

    cout << "Code: ";
    cin >> mAntCode;

    //Error checking for 3 lowercase letters in ant code.
    bool valid = false;
    while (!valid){
        for (int i = 0; i < 3; i++){
            if((isupper(mAntCode[i]))&&(mAntCode.size() == 3)){
                valid = true;
            }
            else {
                cout << "incorrect code was entered." << endl;
                cout << "Please enter a new code: ";
                cin >> mAntCode;
                valid = false;
            }
        }
    }

    // Obtain the type using a menu. We have a loop so
    // we can handle errors.
    valid = false;
    while (!valid)
    {
        cout << "1: Worker Ant" << endl;
        cout << "2: Soldier Ant" << endl;
        cout << "3: Drone" << endl;
        cout << "4: Queen" << endl;
        cout << "Enter selection and return: ";
        int option;
        cin >> option;
        if (!cin)
        {
            // We have an error. Clear the input and try again
            cin.clear();
            cin.ignore();
            continue;
        }

        switch (option)
        {
        case 1:
            mAntType = WorkerAnt;
            valid = true;
            break;

        case 2:
            mAntType = SoldierAnt;
            valid = true;
            break;

        case 3:
            mAntType = Drone;
            valid = true;
            break;

        case 4:
            mAntType = Queen;
            valid = true;
            break;
        }
    }
}

    /** Display the ant.
    */
void CAnt::DisplayAnimal()
{
    cout << "Ant " << mAntCode << " is a ";

    switch (mAntType)
    {
    case WorkerAnt:
        cout << "Worker Ant" << endl;
        break;

    case SoldierAnt:
        cout << "Soldier Ant" << endl;
        break;

    case Drone:
        cout << "Drone" << endl;
        break;

    case Queen:
        cout << "Queen" << endl;
        break;
    }
}

/** Determines if ant is a defender.
    */
int CAnt::IsDefender()
{
    if (mAntType == SoldierAnt) {
        return 1;
    }
    else {
        return 0;
    }
}
