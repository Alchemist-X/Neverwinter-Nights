main : main.o wild.o save.o scence.o data_items.o data_characters.o assistant_function.o final.o initialization.o
	g++ -pedantic-errors -std=c++11 main.o wild.o save.o scence.o data_items.o data_characters.o assistant_function.o final.o initialization.o -o main


main.o : main.cpp wild.h scence.h data_characters.h data_items.h assistant_function.h save.h initialization.h final.h
	g++ -pedantic-errors -std=c++11 -c main.cpp

wild.o : wild.cpp wild.h assistant_function.h
	g++ -pedantic-errors -std=c++11 -c wild.cpp

scence.o : scence.cpp scence.h data_characters.h data_items.h
	g++ -pedantic-errors -std=c++11 -c scence.cpp

data_characters.o : data_characters.cpp data_characters.h
	g++ -pedantic-errors -std=c++11 -c data_characters.cpp

data_items.o : data_items.cpp data_items.h
	g++ -pedantic-errors -std=c++11 -c data_items.cpp

assistant_function.o : assistant_function.cpp assistant_function.h
	g++ -pedantic-errors -std=c++11 -c assistant_function.cpp

save.o : save.cpp save.h
	g++ -pedantic-errors -std=c++11 -c save.cpp

final.o : final.cpp final.h
	g++ -pedantic-errors -std=c++11 -c final.cpp

initialization.o : initialization.cpp initialization.h 
	g++ -pedantic-errors -std=c++11 -c initialization.cpp