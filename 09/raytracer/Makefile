raytracer: array.o camera.o color.o geometry.o light.o material.o mesh.o png_render.o ray.o raytracer.o scene.o surface.o vector.o main.o
	gcc -Wall -fopenmp -O3 *.c -lpng -lm -o raytracer

array.o: array.c array.h
		gcc -Wall  -c $< -o $@

camera.o: camera.c camera.h
		gcc -Wall  -c $< -o $@

color.o: color.c color.h
		gcc -Wall  -c $< -o $@

geometry.o: geometry.c geometry.h
		gcc -Wall  -c $< -o $@

light.o: light.c light.h
		gcc -Wall  -c $< -o $@

material.o: material.c material.h
		gcc -Wall  -c $< -o $@

mesh.o: mesh.c mesh.h
		gcc -Wall  -c $< -o $@

png_render.o: png_render.c png_render.h
		gcc -Wall  -c $< -o $@

ray.o: ray.c ray.h
		gcc -Wall  -c $< -o $@
	
raytracer.o: raytracer.c raytracer.h
		gcc -Wall  -c $< -o $@

scene.o: scene.c scene.h
		gcc -Wall  -c $< -o $@

surface.o: surface.c surface.h
		gcc -Wall  -c $< -o $@

vector.o: vector.c vector.h
		gcc -Wall  -c $< -o $@

main.o: main.c
		gcc -Wall  -c $< -o $@

clean:
	rm -f *.o output.png raytracer


