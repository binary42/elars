/*
 * Alphabet.cpp
 *
 *  Created on: Dec 17, 2012
 *      Author: borotech-linux
 */

#include "Alphabet.h"

Alphabet::Alphabet(int size) {
	Alphabet::size = size;
}

void Alphabet::addSymbol(const Symbol & sym, int value){
	sigma.insert(pair<Symbol, int>(sym, value));
}

void Alphabet::clearAlphabet(){
	sigma.clear();
}

int Alphabet::getSize(){
	return sigma.size();
}

int Alphabet::getKey(const Symbol & sym){
	map<Symbol, int>::const_iterator itr;
	itr = sigma.find(sym);
	return itr->second;
}

const Symbol Alphabet::getSymbol(int value){
	map<Symbol, int>::const_iterator itr;
	Symbol sym;
	for(itr = sigma.begin(); itr != sigma.end(); ++itr){
		if(itr->second == value){
			return (*itr).first;
		}
	}
	return sym;
}

void Alphabet::print(ostream & out) const{
	map<Symbol, int>::const_iterator itr;
	for(itr = sigma.begin(); itr != sigma.end(); ++itr){
		out<<itr->first;
	}
}

ostream & operator<<(ostream & out, const Alphabet & alpha){
	alpha.print();
	return out;
}

