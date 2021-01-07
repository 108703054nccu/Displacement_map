#include "find_surface.h"
#define NUM_SET 8
#include <vector>
findsurface::findsurface(){
}

findsurface::~findsurface(){
}

void findsurface::setEyePoint(vec3 v){
	Eyepoint = v;
	return ;
}

void findsurface::setLightPoint(vec3 v){
	LightPoint = v;
	return ;
} 

vec3 findsurface::getEyePoint(){
	return Eyepoint;
}

vec3 findsurface::getLightPoint(){
	return LightPoint;
}

void findsurface::distanceVertex(){ 

	EyeVec = EyePoint - surfacePoint;
	LightVec = LightPoint - surfacePoint;

	tanEyeVec.x = dot(sTangent,EyeVec);
	tanEyeVec.y = dot(cross(sTangent,sNormal),EyeVec);
	tanEyeVec.z =-invBumpDeoth*dot(sNormal,EyeVec);

	tanLightVec.x = dot(sTangent,EyeVec);
	tanLightVec.y = dot(cross(sTangent,sNormal),EyeVec);
	tanLightVec.z = dot(sNormal,EyeVec);

}

void find_surface(int Height,int Width,int invBumpDepth){
	float distance;
	vec3 offset;
	offset = unit_vector(tanEyeVec);
	vec3 p = LightPoint;
	vec3 p2 = surfacePoint;
	for(int i = 0; i<NUMSET; i++){
		distance = distance_algorithm(p,p2);
		p += distance*offset;
	}
	
	vec3 tanNormal = 2*
	float diffuse = dot ()
	
}
