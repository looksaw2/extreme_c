### 定义源文件变量
SRC ?= main.c
### 定义文件名字的输出文件夹
BIN_DIR := ./bin
TARGET := $(BIN_DIR)/main
### 构建目标
build:
	@mkdir -p $(BIN_DIR)
	@gcc $(SRC) -o $(TARGET)

### 执行目标
run: build
	@$(TARGET)

### 清理目标
clean:
	@rm -rf $(BIN_DIR)
