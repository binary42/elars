/*
 * Symbol.h
 *
 *  Created on: Jan 5, 2013
 *      Author: borotech-linux
 */

#ifndef SYMBOL_H_
#define SYMBOL_H_

#include<string>
#include<iostream>
#include<opencv/cxcore.h>
#include<opencv/cv.h>
#include<opencv/cvaux.h>
#include<opencv/highgui.h>
using namespace std;

class Symbol{
public:
	Symbol(void);
	Symbol(const char * name, int value);
	cv::String getType(void);
	int getValue(void);
	double getConfidence(void);
	void setConfidence(double conf);
	void print(ostream & out = cout) const;
	virtual ~Symbol(void){};

	int value;
private:
	cv::String type;
	double confidence;
};

bool operator<(const Symbol & lhs, const Symbol & rhs);

bool operator==(const Symbol & lhs, const Symbol & rhs);

ostream & operator<<(ostream & out, const Symbol & sym);

#endif /* SYMBOL_H_ */
