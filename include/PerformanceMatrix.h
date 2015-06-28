/*
 * Performancematrix.h
 *
 *  Created on: Jan 5, 2013
 *      Author: borotech-linux
 */
#ifndef PERFORMANCEMATRIC_H_
#define PERFORMANCEMATRIC_H_

#include<opencv/cxcore.h>
#include<opencv/cv.h>
#include<opencv/cvaux.h>
#include<opencv/highgui.h>
#include<string>
#include<iostream>
using namespace std;

class PerformanceMatrix{
public:
	PerformanceMatrix(const char * algName, int size);
	cv::String getName(void);
	void recordRecNum(int row, int col);
	int getRecNum(int row, int col);
	double getConfidence(int sym);
	int getSize(void);
	void getDatabase(const char * fileName);
	void saveDatabase(const char * fileName);
	void print(ostream & out = cout) const;
	virtual ~PerformanceMatrix(void){cvReleaseMat(&pm);}
private:
	cv::String name;
	CvMat * pm;
	int size;
};

ostream & operator<<(ostream & out, const PerformanceMatrix & mat);

#endif
