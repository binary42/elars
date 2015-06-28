/*
 * Alphabet.h
 *
 *  Created on: Dec 17, 2012
 *      Author: borotech-linux
 */

#ifndef ALPHABET_H_
#define ALPHABET_H_

#include<map>
#include"Symbol.h"
#include<iostream>

class Alphabet {
public:
	Alphabet(int size);
	void addSymbol(const Symbol & sym, int value);
	void clearAlphabet(void);
	int getSize(void);
	int getKey(const Symbol & sym);
	const Symbol getSymbol(int value);
	void print(ostream & out = cout)const;
	virtual ~Alphabet(){delete&sigma;};
private:
	map<Symbol, int> sigma;
	int size;
};

ostream & operator<<(ostream & out, const Alphabet & alpha);

#endif /* ALPHABET_H_ */
