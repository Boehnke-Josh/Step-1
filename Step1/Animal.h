/**
 * \file Animal.h
 *
 * \author Joshua Boehnke
 *
 * Class that describes an Animal
 *
 * This class holds information about an Animal
 * That can be used to identify specific features
 */
#pragma once

 /**
   * Class that describes an Animal
   *
   * holds a collection of attributes about the animal
   */

class CAnimal
{
public:
	/** Display an animal. */
	virtual void DisplayAnimal() {}
	/** Checking if animal is defender **/
	virtual int IsDefender() {
		return 0;
	}
	///Destructor
	virtual ~CAnimal();
};

