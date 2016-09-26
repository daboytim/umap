CC       :=g++
STD		 :=-std=gnu++11
CFLAGS   :=$(STD) -c
DFLAGS   :=-Wall -g -rdynamic -DDEBUG
LDFLAGS  :=

SRC_DIR  :=src
BIN_DIR  :=bin

SRC      :=$(wildcard $(SRC_DIR)/*.cpp)
OBJ      :=$(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.o,$(SRC))

TARGET   :=test

.PHONY: all clean debug

all: $(BIN_DIR)/$(TARGET)

clean:
	rm -f $(OBJ) $(BIN_DIR)/$(TARGET)
	
$(BIN_DIR)/%.d: $(SRC_DIR)/%.cpp
	@set -e; rm -f $@; \
    $(CC) $(STD) -M $(CFLAGS) $< -MF $@.$$$$; \
    sed 's,.*\.o[ :]*,$(patsubst $(BIN_DIR)/%.d,$(BIN_DIR)/%.o,${@}) $@ : ,g' < $@.$$$$ > $@; \
    rm -f $@.$$$$

$(BIN_DIR)/%.o: $(BIN_DIR)/%.d
	$(CC) $(CFLAGS) $(patsubst $(BIN_DIR)/%.d,$(SRC_DIR)/%.cpp,${<}) -o $@
	
$(BIN_DIR)/$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $@

debug: CFLAGS +=$(DFLAGS)
debug: clean
debug: all