/**
 * \file Cow.h
 *
 * \author Joshua Boehnke
 *
 * Class that describes a Cow
 *
 * This class holds information about a Cow
 * That can be used to identify specific features
 */

#pragma once
#include "Animal.h"
#include <string>

 /**
  * Class that describes a Cow
  *
  * holds a collection of attributes about the cow
  */

class CCow : public CAnimal
{
public:
    /// The types of cow we can have on our farm
    enum Type { Bull, BeefCow, MilkCow };

    ///Obtain information from the user about this cow.
    void ObtainCowInformation();

    ///Determines if cow is a defender.
    int IsDefender();

    ///displays information about the cow.
    void DisplayAnimal();

private:
    /// The cow's name
    std::string mName;

    ///The type of cow: Bull, BeefCow, or MilkCow
    Type mType = MilkCow;

    /// The milk production for a cow in gallons per day
    double mMilkProduction = 0;

};

