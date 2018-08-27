# headers used
HEADERS = roshambo.h
# The compiler to use
CC=g++

# Options flags to pass to the compiler
CFLAG1=-c 
CFLAG3=-Wall
CFLAG4=-std=c99
# Src and Build (i.e. obj) directories
VPATH=src
BUILDDIR=obj

# Compile each .c src file to a .o file without linking 
$(BUILDDIR)/%.o: $(VPATH)/%.cpp $(VPATH)/$(HEADERS)
	$(CC)  $(CFLAG3) $(CFLAG1) $< -o $@

# Link all .o files with gcc to get the final executable
./playRSB: $(BUILDDIR)/compTurns.o $(BUILDDIR)/genBoards.o $(BUILDDIR)/goFirst.o $(BUILDDIR)/greeting.o $(BUILDDIR)/info.o $(BUILDDIR)/roshamboMain_v2.o $(BUILDDIR)/singlePlayer.o $(BUILDDIR)/thePlays.o $(BUILDDIR)/turns.o $(BUILDDIR)/twoPlayer.o $(BUILDDIR)/wwcd.o
	$(CC) $(BUILDDIR)/compTurns.o $(BUILDDIR)/genBoards.o $(BUILDDIR)/goFirst.o $(BUILDDIR)/greeting.o $(BUILDDIR)/info.o $(BUILDDIR)/roshamboMain_v2.o $(BUILDDIR)/singlePlayer.o $(BUILDDIR)/thePlays.o $(BUILDDIR)/turns.o $(BUILDDIR)/twoPlayer.o $(BUILDDIR)/wwcd.o -o ./playRSB

clean:
	rm -rf $(BUILDDIR)/*o ./playRSB


