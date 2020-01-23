/**
 * \file Farm.cpp
 *
 * \author Joshua Boehnke
 */


#include "Farm.h"
#include "leak.h"
#include <iostream>

using namespace std;

 /** Add an animal to the farm inventory.
    *
    * \param cow A cow to add to the inventory
    */
void CFarm::AddAnimal(CAnimal *animal)
{
    mInventory.push_back(animal);
}

/**
 * Display the farm inventory.
 */
void CFarm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        animal->DisplayAnimal();
    }
}

void CFarm::DisplayDefenders()
{
    int defenders = 0;

    for (auto animal : mInventory)
    {
        defenders += animal->IsDefender();
    }
    cout << "There are " << defenders << " defenders" << endl;
    
}

/**
 * CFarm destructor
 */
CFarm::~CFarm()
{
    // Iterate over all of the animals, destroying 
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();
}