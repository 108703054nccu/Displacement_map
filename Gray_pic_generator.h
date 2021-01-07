#ifndef GRAY_PIC_GENERATOR_H
#define GRAY_PIC_GENERATOR_H

class gray_pic_generator{
	public:
		gray_pic_generator();
		~gray_pic_generator();
	private:
		int Pic_Height;
		int Pic_Width;
		int *Pic;
};
#endif //GRAY_PIC_GENERATOR_H
