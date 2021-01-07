
displacement_pic_generator.out:Gray_pic_generator.o distance_funtion.o find_surface.o vec3.o
	g++ main.cpp -o displacement_pic_generator.out Gray_pic_generator.o distance_funtion.o find_surface.o vec3.o
Gray_pic_generator.o:Gray_pic_generator.cpp Gray_pic_generator.h
	g++ -c Gray_pic_generator.cpp
distance_funtion.o:distance_funtion.cpp distance_funtion.h
	g++ -c distance_funtion.cpp
find_surface.o:find_surface.cpp find_surface.h
	g++ -c find_surface.cpp
vec3.o:vec3.cpp vec3.h
	g++ -c vec3.cpp
clean:
	rm -f vec3.o Gray_pic_generator.o distance_funtion.o find_surface.o displacement_pic_generator.out 
