// ferrymanSimulator.h automatically generated from ASMETA2CODE
#ifndef FERRYMANSIMULATOR_H
#define FERRYMANSIMULATOR_H

//Arduino.h uses WString instead...
#include<string>
typedef std::string String;
#include<iostream> 
#include<vector> 
using namespace std;
#include <set>
#include <map>
#include <list>
#include <bits/stl_tree.h>
#include <boost/tuple/tuple.hpp>
#define ANY String



/////////////////////////////////////////////////
/// DOMAIN DEFINITIONS
/////////////////////////////////////////////////
/* Domain definitions here */
namespace ferrymanSimulatornamespace{
	enum Actors {FERRYMAN, GOAT, CABBAGE, WOLF};
	
	enum Side {LEFT, RIGHT};
	
}

using namespace ferrymanSimulatornamespace;

class ferrymanSimulator{
  
/////////////////////////////////////////////////
/// DOMAIN CONTAINERS
/////////////////////////////////////////////////
/* Domain containers here */
const std::set<Actors> Actors_elems;

const std::set<Side> Side_elems;

public:
/////////////////////////////////////////////////
/// FUNCTIONS
/////////////////////////////////////////////////
std::map<Actors, Side> position[2];
Actors carry;
string outMess[2];
Side oppositeSide (Side param0_oppositeSide);
////////////////////////////////////////////////
/// RULE DEFINITION
/////////////////////////////////////////////////
/* Rule definition here */
void r_updateMessage();
void r_carry (Actors _a);
void r_Main();

ferrymanSimulator();

void getInputs();

void setOutputs();

void fireUpdateSet();

};
#endif

