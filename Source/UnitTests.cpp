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

	return true;
}

bool UnitTest::TestPerormanceMatrix( const PerformanceMatrix &pm )
{

	return true;
}

bool UnitTest::TestConfidenceVector( const ConfidenceVector &cv )
{

	return true;
}

bool UnitTest::TestBuildCV( const BuildCV &builder )
{

	return true;
}

bool UnitTest::TestEnsemble( const Ensemble &ensemble )
{

	return true;
}
