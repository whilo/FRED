/*
  This file is part of the FRED system.

  Copyright (c) 2010-2015, University of Pittsburgh, John Grefenstette,
  Shawn Brown, Roni Rosenfield, Alona Fyshe, David Galloway, Nathan
  Stone, Jay DePasse, Anuroop Sriram, and Donald Burke.

  Licensed under the BSD 3-Clause license.  See the file "LICENSE" for
  more information.
*/

//
//
// File: Vector_Transmission.h
//

#ifndef _FRED_VECTOR_TRANSMISSION_H
#define _FRED_VECTOR_TRANSMISSION_H

#include "Transmission.h"
class Disease;
class Person;
class Place;

#define DISEASE_TYPES 4


class Vector_Transmission: public Transmission {

public:
  Vector_Transmission() {}
  ~Vector_Transmission() {}
  void setup(Disease *disease);
  void spread_infection(int day, int disease_id, Place *place);

private:
  bool attempt_transmission(double transmission_prob, Person * infector, Person * infectee, int disease_id, int day, Place* place);
  void infect_vectors(int day, Place * place);
  void infect_hosts(int day, int disease_id, Place * place);
};


#endif // _FRED_VECTOR_TRANSMISSION_H
