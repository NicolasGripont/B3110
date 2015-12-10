#VARIABLES

MAKEFILE = makefile
EXE = analog.exe
COMP = g++
RM = rm
EDL = g++
ECHO = echo
INT = TestLog.h LogParser.h LogLine.h Date.h Document.h GraphDocuments.h NombreDeHits.h
REAL = $(INT:.h=.cpp) Main.cpp
OBJ = $(INT:.h=.o) Main.o
OUTPUT = -o
RMFLAGS = -f
CPPFLAGS = #-D TEST #-D NOMAP
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


Main.o : TestLog.h TestLog.cpp LogParser.h LogParser.cpp LogLine.h LogLine.cpp Date.h Date.cpp GraphDocuments.h GraphDocuments.cpp Document.h Document.cpp NombreDeHits.h NombreDeHits.cpp $(MAKEFILE)
Date.o : Date.h $(MAKEFILE)
LogLine.o : LogLine.h Date.h Date.cpp $(MAKEFILE)
LogParser.o : LogParser.h LogLine.h LogLine.cpp Date.h Date.cpp $(MAKEFILE)
Document.o : Document.h NombreDeHits.h NombreDeHits.cpp $(MAKEFILE)
GraphDocuments.o : GraphDocuments.h Document.h Document.cpp NombreDeHits.h NombreDeHits.cpp $(MAKEFILE)
NombreDeHits.o : NombreDeHits.h $(MAKEFILE)


TestLog.o : TestLog.h LogParser.h LogParser.cpp LogLine.h LogLine.cpp Date.h Date.cpp $(MAKEFILE)

$(CLEAN) :
	$(ECHO) "nettoyage du repertoire..."
	$(RM) $(RMFLAGS) $(EXE) $(OBJ) core main.o


$(SOS) : 
	./$(BACKUPFILE) $(MAKEFILE) $(INT) $(REAL) $(RESSOURCES) $(BACKUPFILE)

