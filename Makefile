CC = gcc
CFLAGS = -Wall -Wextra -g
LDLIBS = -lmingw32 -lSDL2main -lSDL2
SRC = $(wildcard src/*.c)
HDR = $(wildcard src/*.h)
TARGET = build/nes.exe

$(TARGET): $(SRC) $(HDR)
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDLIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build

.PHONY: run clean