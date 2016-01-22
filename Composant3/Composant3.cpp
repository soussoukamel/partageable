
#include "../interfaces/Composant3.h"
#include "Composant3Version.h"


int composant3(int p1, int p2)
{
	return p1+p2;
}

char * getComposant3Version()
{
	return "Composant 3 version " COMPOSANT_VERSION_STR;
}
