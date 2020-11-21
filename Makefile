
main : main.o wild.o scenes.o data_items.o data_characters.o save.o final.o initialization.o
	g++ -pedantic-errors -std=c++11 $^ -o $@

main.o : main.cpp wild.h scenes.h data_characters.h data_items.h save.h initialization.h final.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

wild.o : wild.cpp wild.h data_items.h data_characters.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

data_characters.o : data_characters.cpp data_characters.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

data_items.o : data_items.cpp data_items.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

scenes.o : scenes.cpp scenes.h data_items.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

save.o : save.cpp save.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

final.o : final.cpp final.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

initialization.o : initialization.cpp initialization.h hero.h
	g++ -pedantic-errors -std=c++11 -c $<

clean:
	rm -f *.o
