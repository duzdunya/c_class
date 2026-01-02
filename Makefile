code:
	gcc -o struct-with-function struct-with-function.c -Wall -lm
	gcc -o prep-struct prep-struct.c -Wall -lm
	gcc -o question3 question3.c -Wall -lm 
	gcc -o question4 question4.c -Wall -lm
	gcc -o question5 question5.c -Wall -lm


SRC_DIR := src
BUILD_DIR := build
SOURCES := $(wildcard $(SRC_DIR)/*.c)
EXECUTABLES := $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%, $(SOURCES))
CC := gcc
all: $(EXECUTABLES) md

$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $< -o $@
md:
	markdown -o build/01.html 01.md
	markdown -o build/01_tr.html 01_tr.md
	markdown -o build/questions.html questions/questions.md
	markdown -o build/answers.html answers.md 

.PHONY: all clean md


