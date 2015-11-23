#VARIABLES

MAKEFILE = makefile
EXE = TPLOG.exe
COMP = g++
RM = rm
EDL = g++
ECHO = echo
INT =
REAL = $(INT:.h=.cpp) Main.cpp
OBJ = $(INT:.h=.o) Main.o
OUTPUT = -o
RMFLAGS = -f
CPPFLAGS =# -D NOMAP
EDLFLAGS = 
LIBS = 
LIBPATH =# -L
INCPATH =# -I
CLEAN = clean
SOS = backup
BACKUPFILE = backup.sh
RESSOURCES = 


#RULES

$(EXE) : $(OBJ)
	$(ECHO) "Edition des liens"
	$(EDL) $(OUTPUT) $(EXE) $(EDLFLAGS) $(LIBPATH) $(OBJ) $(LIBS)

%.o : %.cpp
	$(ECHO) "Compilation de <$<>"
	$(COMP) $(CPPFLAGS) $(INCPATH) -c $<


Main.o :

$(CLEAN) :
	$(ECHO) "nettoyage du repertoire..."
	$(RM) $(RMFLAGS) $(EXE) $(OBJ) core main.o


$(SOS) : 
	./$(BACKUPFILE) $(MAKEFILE) $(INT) $(REAL) $(RESSOURCES) $(BACKUPFILE)

