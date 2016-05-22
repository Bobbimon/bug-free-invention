CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
#INCLUDES = -I/usr/include -I.
#LFLAGS = -L/usr/lib
LFLAGS = -Wall $(DEBUG)
#LIBS = -lstdc++
SRCS = Main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET_DIR = ../../../target/bin
#OBJ = $(TARGET_DIR)/Main.o
MAIN = main

#.PHONY: depend clean

all: $(MAIN)
	@echo Sucessfully compiled Hello project.

#$(MAIN): $(OBJS)
#	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET_DR)/$(MAIN) $(OBJ) $(LFLAGS) $(LIBS)

$(MAIN): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(MAIN)

#.cpp.o:
#	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(TARGET_DIR)/$@

clean:
	$(RM) $(TARGET_DIR)/*.o $(TARGET_DIR)/$(MAIN)

#depend: $(SRCS)
	#makedepend $(INCLUDES) $^
