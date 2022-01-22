# SPDX-FileCopyrightText: 2022 Samuel Wu
#
# SPDX-License-Identifier: CC0-1.0
CXX = g++
CCFLAGS = -pipe -g -Wall -Wextra -pedantic
CXXFLAGS = `pkg-config --cflags gtkmm-4.0`
LDFLAGS = `pkg-config --libs gtkmm-4.0`

SRC = src
OBJ = obj
SRCS = $(wildcard $(SRC)/*.cpp)
OBJS = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))

PROGRAM = helloworld

.PHONEY: all

all: $(PROGRAM)

$(PROGRAM): $(OBJS) $(OBJ)
	$(CXX) $(CCFLAGS) $(OBJS) -o $@ $(LDFLAGS)

$(OBJ)/%.o: $(SRC)/%.cpp $(OBJ)
	$(CXX) $(CCFLAGS) -c $< -o $@ $(CXXFLAGS)

$(OBJ):
	mkdir -p $@

clean:
	rm -rfv $(OBJ) $(PROGRAM)*.*
