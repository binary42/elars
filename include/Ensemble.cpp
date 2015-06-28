/*
 * Ensemble.cpp
 *
 *  Created on: Jan 5, 2013
 *      Author: borotech-linux
 */
#include"Ensemble.h"

Ensemble::Ensemble(list<ConfidenceVector*> & vectors, Alphabet & alpha){
	Ensemble::confVects = & vectors;
	Ensemble::alpha = &alpha;
	Ensemble::index = 0;
	Ensemble::choices = new ConfidenceVector("Choices", alpha.getSize());
}

Symbol Ensemble::getDecision(){
	maxCombiner();
	Symbol sym = translateDecision();
	return sym;
}

double Ensemble::maxCombiner(){
	int size = Ensemble::confVects->front()->getSize();
	double totalPs = 0.0;
	list<ConfidenceVector*>::const_iterator iterator1;
	//add the corresponding elements for each symbol
	for(size_t i = 0; i < Ensemble::confVects->size(); i++){
		totalPs = 0.0;
		for(iterator1 = confVects->begin(); iterator1 != confVects->end();
																++iterator1){
			double value = (*iterator1)->getElement(i);
			totalPs += value;
		}
		choices->addElement(i, totalPs);
	}
	return choices->getMaxValue();
}

Symbol Ensemble::translateDecision(){
	index = choices->getMaxIndex();
	cout<<index;
	Symbol sym = alpha->getSymbol(index);

	return sym;
}

