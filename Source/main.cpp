#include "Elars.h"
#include "UnitTests.cpp"

INITIALIZE_EASYLOGGINGPP

int main( int argc, char** argv )
{
	std::unique_ptr<UnitTest> tests( new UnitTest() );

	LOG( INFO ) << "Testing ELARS: ";

	std::unique_ptr<Symbol> symbol( new Symbol( "test", 20.0 ) );
	std::unique_ptr<Alphabet> alphabet( new Alphabet( 4 ) );
	std::unique_ptr<PerformanceMatrix> pm1( new PerformanceMatrix( "test1", 4 ) );
	// BuildCV creates the confidence vector for a symbol, and performance matrix
	std::unique_ptr<BuildCV> builder( new BuildCV( symbol, pm1, alphabet) );

	std::unique_ptr<Ensemble> ensemble( new Ensemble( cv, alphabet ) );

	return 0;
}
