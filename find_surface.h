#ifndef FIND_SURFACE_H
#define FIND_SURFACE_H
#include "vec3.h"
#include "distance_funtion.h"
class findsurface:public distancefuntion{
	public:
		findsurface();
		~findsurface();
		void setEyePoint(vec3);
		void setLightPoint(vec3);
		void setEyeVec();
		void setLightVec();
		vec3 getEyeVec();
		vec3 getLightVec();
		vec3 getEyePoint();
		vec3 getLightPoint();
		void find_surface();
	private:
		vec3 EyePoint;
		vec3 LightPoint;
		vec3 EyeVec;
		vec3 LightVec;
		vec3 **DistanceMap;

};
#endif //FIND_SURFACE_H
