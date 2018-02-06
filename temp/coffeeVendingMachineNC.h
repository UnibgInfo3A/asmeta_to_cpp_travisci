// coffeeVendingMachineNC.h automatically generated from ASMETA2CODE
#ifndef COFFEEVENDINGMACHINENC_H
#define COFFEEVENDINGMACHINENC_H

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
namespace coffeeVendingMachineNCnamespace{
	enum CoinType {HALF, ONE};
	
	enum Product {COFFEE, TEA, MILK};
	
	typedef int QuantityDomain;
	
	typedef int CoinDomain;
	
}

using namespace coffeeVendingMachineNCnamespace;

class coffeeVendingMachineNC{
  
/////////////////////////////////////////////////
/// DOMAIN CONTAINERS
/////////////////////////////////////////////////
/* Domain containers here */
const std::set<CoinType> CoinType_elems;

const std::set<Product> Product_elems;

const std::set<QuantityDomain> QuantityDomain_elems;

const std::set<CoinDomain> CoinDomain_elems;

public:
/////////////////////////////////////////////////
/// FUNCTIONS
/////////////////////////////////////////////////
std::map<Product, QuantityDomain> available[2];
CoinDomain coins[2];
CoinType insertedCoin;
Product chosenProduct;
////////////////////////////////////////////////
/// RULE DEFINITION
/////////////////////////////////////////////////
/* Rule definition here */
void r_serveProduct (Product _p);
void r_Main();

coffeeVendingMachineNC();

void getInputs();

void setOutputs();

void fireUpdateSet();

};
#endif

