/*
 * ConfidenceVector.h
 *
 *  Created on: Jan 4, 2013
 *      Author: borotech-linux
 *The MIT License (MIT)

Copyright (c) 2015 Jim N

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

 *
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
