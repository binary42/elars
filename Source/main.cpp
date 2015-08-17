#include "Elars.h"
#include "UnitTests.cpp"

INITIALIZE_EASYLOGGINGPP

int main( int argc, char** argv )
{
	std::unique_ptr<UnitTest> tests( new UnitTest() );

	LOG( INFO ) << "Testing logging";

	std::unique_ptr<Symbol> symbol( new Symbol( "test", 20.0 ) );



	return 0;
}
