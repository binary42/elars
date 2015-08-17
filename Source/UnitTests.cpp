/*
 * UnitTests.cpp
 *
 *  Created on: Aug 15, 2015
 *      Author: borotech
 */

#include <iostream>
#include "Elars.h"

class UnitTest
{
public:
	UnitTest();
	virtual ~UnitTest();

	bool TestSymbol( const Symbol &symbol );
	bool TestAlphabet( const Alphabet &alphabet );
	bool TestPerormanceMatrix( const PerformanceMatrix &pm );
	bool TestConfidenceVector( const ConfidenceVector &cv );
	bool TestBuildCV( const BuildCV &builder );
	bool TestEnsemble( const Ensemble &ensemble );

};

bool UnitTest::TestSymbol( const Symbol &symbol )
{
	LOG( INFO ) << "Symbol Data:";
	symbol.print( std::cout );

	return true;
}

bool UnitTest::TestAlphabet( const Alphabet &alphabet )
{
	LOG( INFO ) << "Alphabet Data: ";
	alphabet.print( std::cout );

	return true;
}

bool UnitTest::TestPerormanceMatrix( const PerformanceMatrix &pm )
{
	LOG( INFO ) << "Performance Matrix Data: ";
	pm.print( std::cout );

	return true;
}

bool UnitTest::TestConfidenceVector( const ConfidenceVector &cv )
{
	LOG( INFO ) << "Confidence Vector Data: ";
	cv.print( std::cout );

	return true;
}

bool UnitTest::TestBuildCV( const BuildCV &builder )
{
	LOG( INFO ) << "Build CV Data: ";

	return true;
}

bool UnitTest::TestEnsemble( const Ensemble &ensemble )
{
	LOG( INFO ) << "Ensemble Data: ";

	return true;
}
