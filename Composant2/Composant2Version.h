
#define ComposantVersion_1 3
#define ComposantVersion_2 1
#define ComposantVersion_3 2
#define ComposantVersion_4 5

/////////// apres cette ligne: ne pas modifier ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#define COMPOSANT_VERSION ComposantVersion_1,ComposantVersion_2,ComposantVersion_3,ComposantVersion_4

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_TEXT(_version,_build,_interface,_fonction) \
	TOSTRING(_version) TOSTRING(.) TOSTRING(_build) TOSTRING(.) TOSTRING(_interface) STRINGIFY(.) TOSTRING(_fonction)

#define COMPOSANT_VERSION_STR VERSION_TEXT(ComposantVersion_1,ComposantVersion_2,ComposantVersion_3,ComposantVersion_4)
