/*
 * Ensemble.h
 *
 *  Created on: Jan 5, 2013
 *      Author: borotech-linux
 */

#ifndef ENSEMBLE_H_
#define ENSEMBLE_H_

#include<list>
#include"ConfidenceVector.h"
#include"Alphabet.h"
#include"Symbol.h"

class Ensemble{
public:
	Ensemble(list<ConfidenceVector*> & vectors, Alphabet & alpha);
	Symbol getDecision(void);
	virtual ~Ensemble(void){delete&confVects;delete&alpha;delete&choices;};
private:
	double maxCombiner(void);
	Symbol translateDecision();
	list<ConfidenceVector*> * confVects;
	Alphabet * alpha;
	int index;
	ConfidenceVector * choices;
};


#endif /* ENSEMBLE_H_ */
