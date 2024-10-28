CC=g++

all : b.cpp
	$(CC) b.cpp -o b.exe
	./b.exe

check_valgrind : b.cpp
	$(CC) b.cpp -o b.exe
	valgrind --leak-check=full ./b.exe

check_leaks : b.cpp
	$(CC) b.cpp -o b.exe
	leaks --atExit -- ./b.exe

clean : 
	rm -f b.exe
	echo "Cleaned up the directory"