/**
 * \file Farm.h
 *
 * \author Joshua Boehnke
 *
 * Class that describes a Farm.
 *
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */


#pragma once
#include <vector>
#include "Cow.h"

/**
 * Class that describes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */

class CFarm
{
public:
    ///Adds an animal to the farm.
    void AddAnimal(CAnimal* animal);

    ///Displays the inventory on existing animals in the farm.
    void DisplayInventory();

    ///Displays the number of defenders existing on the farm.
    void DisplayDefenders();

    ///CFarm destructor.
    ~CFarm();

private:
    /// A list with the inventory of all animals on the farm
    std::vector<CAnimal*> mInventory;
};

