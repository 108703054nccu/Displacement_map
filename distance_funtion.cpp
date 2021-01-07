#include "distance_funtion.h"

distance_funtion::distance_funtion(){;}

distance_funtion::distance_funtion(){;}

int distance_funtion::distance_algorithm(vec3 pn,vec3 surfaceHeight){
		vec3 store;
		store = unit_vector(pn - surfaceHeight);
		return sqrt(pn-surfaceHeight)
}
