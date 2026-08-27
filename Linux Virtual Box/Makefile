# object creation
all: game

game: main.o LuckyNumber.o
	gcc -o game main.o LuckyNumber.o

LuckyNumber.o: LuckyNumber.c LuckyNumber.h
	gcc -c LuckyNumber.c

main.o: main.c LuckyNumber.c LuckyNumber.h
	gcc -c main.c LuckyNumber.c


# install to the luckynumber folder
install: game
	install -m 755 game /home/osc/assignments/luckynumber/game

# uninstall from the luckynumber folder
uninstall: 
	rm -f /home/osc/assignments/luckynumber/game
	
# clean
clean: 
	rm -f game LuckyNumber.o main.o
