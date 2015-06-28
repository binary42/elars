/*
 * Symbol.cpp
 *
 *  Created on: Jan 5, 2013
 *      Author: borotech-linux
 */
#include"Symbol.h"

Symbol::Symbol(const char * name, int value){
	Symbol::type = name;
	Symbol::value = value;
	Symbol::confidence = 0.0;
}

Symbol::Symbol(){
	Symbol::value = 0;
	Symbol::confidence = 0.0;
	Symbol::type = " ";
}

string Symbol::getType(){
	return type;
}

int Symbol::getValue(){
	return value;
}

double Symbol::getConfidence(){
	return confidence;
}

void Symbol::setConfidence(double conf){
	Symbol::confidence = conf;
}

void Symbol::print(ostream & out) const{
	out<<type<<" "<<value<<endl;
}

bool operator<(const Symbol & lhs, const Symbol & rhs){
	return (lhs.value < rhs.value);
}

bool operator==(const Symbol & lhs, const Symbol & rhs){
	return (lhs.value == rhs.value);
}

ostream & operator<<(ostream & out, const Symbol & sym){
	sym.print();
	return out;
}


