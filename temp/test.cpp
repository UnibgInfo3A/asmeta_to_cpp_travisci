#define BOOST_TEST_MODULE TestsluiceGateGround
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <iostream>
#include "sluiceGateGround.h"

BOOST_AUTO_TEST_SUITE(TestsluiceGateGround)
BOOST_AUTO_TEST_CASE( my_test_0 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//0
BOOST_AUTO_TEST_CASE( my_test_1 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//1
BOOST_AUTO_TEST_CASE( my_test_2 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//2
BOOST_AUTO_TEST_CASE( my_test_3 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//3
BOOST_AUTO_TEST_CASE( my_test_4 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//4
BOOST_AUTO_TEST_CASE( my_test_5 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//5
BOOST_AUTO_TEST_CASE( my_test_6 ){
	// instance of the SUT
	sluiceGateGround sluicegateground;	
	// state 
	// check controlled variables 
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYCLOSED);
	// set monitored variables 
	sluicegateground.passed[170]=true;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	sluicegateground.passed[10]=false;
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
	// state 
	// check controlled variables 
	BOOST_CHECK(sluicegateground.phase[0]==FULLYOPEN);
	// set monitored variables 
	// call main rule
	sluicegateground.r_Main();
	sluicegateground.fireUpdateSet();
}
//6
BOOST_AUTO_TEST_SUITE_END()


