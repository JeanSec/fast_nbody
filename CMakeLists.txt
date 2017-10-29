#Declaration du projet nbody
	project(nbody)
#Declaration de l'executable nbody
	add_executable(
	nbody
	main.cpp
	corps.h
	corps.cpp
	fonctions.h
	fonctions.cpp
	
)
SET(CMAKE_BUILD_TYPE "Debug")

