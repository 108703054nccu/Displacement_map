#ifndef PIC_GENERATOR_H
#define PIC_GENERATOR_H
#include "find_surface.h"
class picgenerator:public findsurface{
	public:
		picgenerator();
		~picgenerator();
	private:
		int Pic_Height;
		int Pic_Width;
		int *Pic;
};
#endif //GRAY_PIC_GENERATOR_H
