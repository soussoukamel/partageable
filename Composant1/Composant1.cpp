
#include "Composant1.h"
#include "Composant1Version.h"
#include "Composant3.h"
#include <string>

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return addition_interne(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return composant3(a1, a2);
}

char * getComposant1Version()
{
	char * vers1 = " / Composant 1 version "  COMPOSANT_VERSION_STR;
	char * vers3 = getComposant3Version();
	char * version = (char*) malloc(strlen(vers3) + strlen(vers1));

	strcpy(version, vers3);
	strcat(version, vers1);

	return version;
}
