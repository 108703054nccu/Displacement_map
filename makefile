
displacement_pic_generator.out:main.o Gray_pic_generator.o distance_funtion.o find_surface.o
	g++ -o displacement_pic_generator.out main.o Gray_pic_generator.o distance_funtion.o find_surface.o
main.o:main.cpp
	g++ -c main.cpp
Gray_pic_generator.o:Gray_pic_generator.cpp Gray_pic_generator.h
	g++ -c Gray_pic_generator.cpp
distance_funtion.o:distance_funtion.cpp distance_funtion.h
	g++ -c distance_funtion.cpp
find_surface.o:find_surface.cpp find_surface.h
	g++ -c find_surface.cpp
clean:
	rm -f main.o Gray_pic_generator.o distance_funtion.o find_surface.o displacement_pic_generator.out 
