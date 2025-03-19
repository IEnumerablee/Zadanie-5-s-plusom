CC = g++
CFLAGS = -Wall -Wextra -std=c++17
TARGET = 5+
SRC = 5+.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

