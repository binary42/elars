/*
 * ConfidenceVector.cpp
 *
 *  Created on: Jan 4, 2013
 *      Author: borotech-linux
 */
#include"ConfidenceVector.h"

ConfidenceVector::ConfidenceVector(const string & algName, int size){
	ConfidenceVector::name = algName;
	ConfidenceVector::ONE = 1;
	ConfidenceVector::ZERO = 0;
	ConfidenceVector::cv = (CvMat*)cvCreateMat(size, ONE, CV_32FC1);
	ConfidenceVector::maxIndex = 0;
}

void ConfidenceVector::addElement(int row, double element){
	cvmSet(cv, row, ZERO, element);
}

double ConfidenceVector::getElement(int index){
	return cvmGet(cv, index, ZERO);
}

double ConfidenceVector::getMaxValue(){
	double maxVal = 0.0;
	for(int i = 0; i < cv->rows; i++){
		if(maxVal < cvmGet(cv, i, ZERO)){
			maxVal = cvmGet(cv, i, ZERO);
			maxIndex = i;
		}
	}
	return maxVal;
}

int ConfidenceVector::getMaxIndex(){
	return maxIndex;
}

string ConfidenceVector::getName(){
	return name;
}

int ConfidenceVector::getSize(){
	return cv->rows;
}

void ConfidenceVector::print(ostream & out) const{
	for(int i = 0; i < cv->rows; i++){
		out<<cvmGet(cv, i, ZERO)<<endl;
	}
}

ostream & operator<<(ostream & out, const ConfidenceVector & cv){
	cv.print(out);
	return out;
}
