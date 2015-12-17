pu: main.o imageloader.o event.o eventmanager.o
	g++ -g -o pu -std=c++11 -pthread -lGL -lglut -lGLU main.o	imageloader.o	event.o	eventmanager.o	

main.o: main.cpp
	g++ -g -c -std=c++11 main.cpp				

imageloader.o: imageloader.cpp
	g++ -g -c -std=c++11 imageloader.cpp			

event.o: event.cpp
	g++ -g -c -std=c++11 event.cpp		

eventmanager.o: eventmanager.cpp
	g++ -g -c -std=c++11 eventmanager.cpp	

