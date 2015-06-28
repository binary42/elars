/*
 * BuildCV.h
 *
 *  Created on: Jan 6, 2013
 *      Author: borotech-linux
 */

#ifndef BUILDCV_H_
#define BUILDCV_H_
#include"ConfidenceVector.h"
#include"PerformanceMatrix.h"
#include"Alphabet.h"

class BuildCV{
public:
	BuildCV(Symbol & sym, PerformanceMatrix & pm, Alphabet & alpha);
	ConfidenceVector  * getCV(void);
	virtual ~BuildCV(void){delete(&sym);delete(&cv);delete(&pm);delete(&alpha);};
private:
	void createConfVect(void);
	Symbol * sym;
	ConfidenceVector * cv;
	PerformanceMatrix * pm;
	Alphabet * alpha;
};

#endif /* BUILDCV_H_ */
