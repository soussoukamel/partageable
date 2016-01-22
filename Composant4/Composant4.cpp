
#include "../interfaces/Composant4.h"
#include "Composant4Version.h"


int composant1(int p1, int p2)
{
	p1 += p2;
	return p1;
}

char * getComposant1Version()
{
	return "Composant 4 version " COMPOSANT_VERSION_STR;
}
