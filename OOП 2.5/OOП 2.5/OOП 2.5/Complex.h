#pragma once
#include "Pair.h"

using namespace std;

class Complex
{
private:
	Pair pair;

public:


	Pair GetPair() { return pair; }
	void SetPair(Pair pair) {};


	void Display(Pair& k1, Pair& k2);
	void Init(Pair pair);

	int Minus(Pair& k1, Pair& k2);//(a, b) – (c, d) = (a – c, b – d).
	
	int Multiply(Pair& k1, Pair& k2);//(a, b) × (c, d) = (ac – bd, ad + bc)




};

