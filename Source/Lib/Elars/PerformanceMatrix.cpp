/*
 * PerformanceMatrix.cpp
 *
 *  Created on: Jan 5, 2013
 *      Author: borotech-linux
 */
#include"PerformanceMatrix.h"

PerformanceMatrix::PerformanceMatrix(const char * algName, int size){
	PerformanceMatrix::name = algName;
	PerformanceMatrix::size = size;
	PerformanceMatrix::pm = (CvMat*)cvCreateMat(size, size, CV_32FC1);
}

double PerformanceMatrix::getConfidence(int sym){
	double conf = 0.0;
	double val = 0.0;
	for(size_t i = 0; i < PerformanceMatrix::size; i++){
		val += cvmGet(pm, i, sym);
	}
	conf = cvmGet(pm, sym, sym) / val;
	return conf;
}

void PerformanceMatrix::getDatabase(const char * fileName){
	pm = (CvMat*)cvLoad(fileName);
}

string PerformanceMatrix::getName(){
	return name;
}

int PerformanceMatrix::getRecNum(int row, int col){
	return (int)cvmGet(pm, row, col);
}

int PerformanceMatrix::getSize(){
	return size;
}

void PerformanceMatrix::recordRecNum(int row, int col){
	cvmSet(pm, row, col, cvmGet(pm, row, col)+1);
}

void PerformanceMatrix::saveDatabase(const char * fileName){
	cvSave(fileName, pm);
}

void PerformanceMatrix::print(ostream & out) const{
	for(size_t i = 0; i < pm->cols; i++){
		for(size_t j = 0; j < pm->cols; j++){
			out<<cvmGet(pm, i, j);
		}
		out<<endl;
	}
}

ostream & operator<<(ostream & out, const PerformanceMatrix & mat){
	mat.print();
	return out;
}

