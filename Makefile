.ONESHELL:

SHELL := $(shell which bash)

PROJECT_NAME := Colorbase
EXE_NAME     := colorbase
SRC_DIR      := src
SOURCES      := $(wildcard $(SRC_DIR)/*.c)
BUILD_DIR    := build
BIN_DIR      := $(BUILD_DIR)/bin
PROGRAM      := $(BIN_DIR)/$(EXE_NAME)

CMAKE_FLAGS :=
CMAKE_FLAGS += -DSRC_DIR='$(SRC_DIR)'
CMAKE_FLAGS += -DPROJECT_NAME='$(PROJECT_NAME)'
CMAKE_FLAGS += -DEXE_NAME='$(EXE_NAME)'

all: $(PROGRAM)
.PHONY: all

$(PROGRAM): $(SOURCES) | $(BUILD_DIR)
	cd $(BUILD_DIR)
	cmake $(CMAKE_FLAGS) ..
	make

$(BUILD_DIR):
	mkdir -p $@

dev: run
.PHONY: dev

run: $(PROGRAM)
	./$<
.PHONY: run

test:
	valgrind --leak-check=full $(PROGRAM)

clean:
	rm -rf $(BUILD_DIR)
.PHONY: clean

