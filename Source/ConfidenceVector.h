/*
 * ConfidenceVector.h
 *
 *  Created on: Jan 4, 2013
 *      Author: borotech-linux
 */

#ifndef CONFIDENCEVECTOR_H_
#define CONFIDENCEVECTOR_H_

#include<string>
#include<iostream>
#include<opencv/cxcore.h>
#include<opencv/cv.h>
#include<opencv/cvaux.h>
#include<opencv/highgui.h>
using namespace std;

class ConfidenceVector{
public:
	ConfidenceVector(const cv::String & algName, int size);
	string getName(void);
	void addElement(int row, double element);
	double getMaxValue(void);
	int getMaxIndex();
	int getSize(void);
	double getElement(int index);
	void print(ostream & out = cout) const;
	virtual ~ConfidenceVector(void){delete(&cv);};
private:
	int getIndexMax(void);
	void sortVector(void);
	CvMat * cv;
	cv::String name;
	int ONE, ZERO, maxIndex;
};

ostream & operator<<(ostream & out, const ConfidenceVector & cv);

#endif /* CONFIDENCEVECTOR_H_ */
