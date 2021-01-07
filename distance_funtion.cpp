#include "distance_funtion.h"

distancefuntion::distancefuntion(){;}

distancefuntion::~distancefuntion(){;}

int distancefuntion::distance_algorithm(vec3 pn,vec3 surfaceHeight){
		vec3 store;
		store = pn - surfaceHeight;
		return store.length();
}


