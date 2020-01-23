/**
 * \file Chicken.h
 *
 * \author Joshua Boehnke
 *
 * Declaration of the CChicken class.
 */

#pragma once
#include "Animal.h"
#include <string>

 /** Class that describes a chicken.
 */
class CChicken : public CAnimal
{
public:
    ///Obtains information regarding the chicken.
    void ObtainChickenInformation();

    ///Displays infromation about the chicken.
    void DisplayAnimal();

private:
    //! The chicken's ID
    std::string mId;
};

