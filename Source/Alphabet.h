/*
 * Alphabet.h
 *
 *  Created on: Dec 17, 2012
 *      Author: borotech-linux
 *
The MIT License (MIT)

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
*/
#pragma once

#include <map>
#include "Symbol.h"
#include <iostream>

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


