.PHONY: run clean

CC = cc
OBJECTS = build/main.o build/math.o
MODE ?= debug
TARGET = main

ifeq ($(MODE), release)
CFLAGS = -O2
else
CFLAGS = -g
endif

$(TARGET): $(OBJECTS)
	@echo $(MODE)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

build:
	mkdir -p build

build/%.o: %.c math.h | build
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	@./$(TARGET)

clean:
	@rm -rf $(TARGET) build