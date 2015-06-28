/*
 * BuildCV.cpp
 *
 *  Created on: Jan 6, 2013
 *      Author: borotech-linux
 */
#include"BuildCV.h"

BuildCV::BuildCV(Symbol & sym, PerformanceMatrix & pm, Alphabet & alpha){
	BuildCV::sym = &sym;
	BuildCV::pm = &pm;
	BuildCV::alpha = &alpha;
	BuildCV::cv = new ConfidenceVector(pm.getName(),pm.getSize());
}

ConfidenceVector * BuildCV::getCV(){
	createConfVect();
	return cv;
}

void BuildCV::createConfVect(){
	double divisor = 0.0;
	double post = 0.0;
	//sum column #times this symbol was recognized
	for(int i = 0; i < pm->getSize(); i++){
		divisor += pm->getRecNum(i, sym->value);
	}
	for(int i = 0; i < pm->getSize(); i++){
		post = pm->getRecNum(i, sym->value) / divisor;
		cv->addElement(i, post);
	}
}


