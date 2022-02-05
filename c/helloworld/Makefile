# SPDX-FileCopyrightText: 2022 Samuel Wu
#
# SPDX-License-Identifier: CC0-1.0
CXX = gcc
CCFLAGS = -pipe -g -Wall -Wextra -pedantic
CXXFLAGS = `pkg-config --cflags gtk4`
LDFLAGS = `pkg-config --libs gtk4`

SRC = src
OBJ = obj
SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

PROGRAM = helloworld

.PHONEY: all

all: $(PROGRAM)

$(PROGRAM): $(OBJS) $(OBJ)
	$(CXX) $(CCFLAGS) $(OBJS) -o $@ $(LDFLAGS)

$(OBJ)/%.o: $(SRC)/%.c $(OBJ)
	$(CXX) $(CCFLAGS) -c $< -o $@ $(CXXFLAGS)

$(OBJ):
	mkdir -p $@

clean:
	rm -rfv $(OBJ) $(PROGRAM)*
