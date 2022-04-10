#include "Complex.h"
#include "Pair.h"

using namespace std;

void Complex::Init(Pair pair) { SetPair(pair); }

void Complex::Display(Pair& k1, Pair& k2)
{
	Complex R;
	cout << " (a,b) * (c,d) = (a c * b d , a d + b c)" << "= ";
	cout << "( " << (R.Multiply(k1, k2)) << " )" << endl;

	cout << " (a,b) - (c,d) = (a - c, b - d)" << "=";
	cout << "( " << R.Minus(k1, k2) << " )" << endl;
}

int Complex::Minus(Pair& k1, Pair& k2)//(a, b) – (c, d) = (a – c, b – d).
{
	return (k1.GetA() - k2.GetB(), k1.GetA() - k2.GetB());
}


int Complex::Multiply(Pair& k1, Pair& k2)//(a, b) × (c, d) = (ac – bd, ad + bc)
{
	return (k1.GetA()* k2.GetB() - k2.GetA()) * (k1.GetB(), k2.GetB(), k1.GetA() * k2.GetB() - k2.GetA()) * (k1.GetB(), k2.GetB());
}



