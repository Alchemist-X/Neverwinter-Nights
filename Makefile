main : main.o wild.o scences.o data_items.o data_characters.o save.o final.o initialization.o
	g++ -pedantic-errors -std=c++11 main.o wild.o scences.o data_items.o data_characters.o save.o final.o initialization.o -o main


main.o : main.cpp wild.h scences.h data_characters.h data_items.h save.h initialization.h final.h
	g++ -pedantic-errors -std=c++11 -c main.cpp

wild.o : wild.cpp wild.h data_items.h data_characters.h hero.h
	g++ -pedantic-errors -std=c++11 -c wild.cpp

scences.o : scences.cpp scences.h data_characters.h data_items.h hero.h
	g++ -pedantic-errors -std=c++11 -c scences.cpp

data_characters.o : data_characters.cpp data_characters.h hero.h
	g++ -pedantic-errors -std=c++11 -c data_characters.cpp

data_items.o : data_items.cpp data_items.h hero.h
	g++ -pedantic-errors -std=c++11 -c data_items.cpp

save.o : save.cpp save.h hero.h
	g++ -pedantic-errors -std=c++11 -c save.cpp

final.o : final.cpp final.h hero.h
	g++ -pedantic-errors -std=c++11 -c final.cpp

initialization.o : initialization.cpp initialization.h hero.h
	g++ -pedantic-errors -std=c++11 -c initialization.cpp
