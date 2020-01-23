/**
 * \file Ant.h
 *
 * \author Joshua Boehnke
 *
 * Class that describes an Ant
 *
 * This class holds information about an Ant
 * That can be used to identify specific features
 */
#pragma once
#include "Animal.h"
#include <string>

 /**
   * Class that describes an Ant
   *
   * holds a collection of attributes about the ant
   */

class CAnt : public CAnimal
{
public:
	///The types of ants that exist on the farm.
	enum Type {
		WorkerAnt, SoldierAnt, Drone, Queen
	};

	///obtains infromation about the ant.
	void ObtainAntInformation();

	///displays animal characteristics.
	void DisplayAnimal();

	///Determines if ant is a defender.
	int IsDefender();

private:
	///the ant's type 
	Type mAntType = WorkerAnt;

	///the ant's code 
	std::string mAntCode;
};

