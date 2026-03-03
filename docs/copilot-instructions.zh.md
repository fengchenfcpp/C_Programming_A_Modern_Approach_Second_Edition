<!-- Copilot / AI agent 指南（中文） -->
# 仓库概览与快速上手

本仓库收集了来自《C 程序设计：现代方法》的练习程序，绝大多数为单文件示例。文件以章节/题号为前缀命名（例如 `6_1_CountDownTimer.c`、`10_3_3_poker.c`）。少数小型多文件示例位于 `15_word/`、`16_maintainsPartDB/` 和 `cprogs2/` 子目录。

保持变更最小且局部化：大多数练习为学习用途的独立可执行文件，不要进行批量重命名或大规模重构。

## 总体结构
- 根目录：大量单文件练习，每个文件通常可编译为单一可执行文件（例如 `6_1_CountDownTimer.c`）。
- `15_word/`：多文件示例，包含 `line.c`、`word.c` 及头文件，演示简单模块划分。
- `16_maintainsPartDB/`：使用 `readline.*` 的小型示例，演示简单的 CLI 数据管理。
- `cprogs2/`：另一组练习和备选实现，常作为参考实现或测试用例。

当修复或添加功能影响多个文件时，先检查上述子目录中是否已有参考实现。

## 构建 / 调试（Windows + MinGW）
- 推荐的 VS Code 构建任务命令：

  C:\MinGW\bin\gcc.exe -fdiagnostics-color=always -g <file.c> -o <fileDir>\\<fileBasenameNoExtension>.exe

- 多文件构建示例：

  gcc -g 15_word/line.c 15_word/word.c -o 15_word/word.exe

- 使用 MinGW/gdb 或 VS Code C/C++ 扩展进行调试。仓库没有顶层 CI 或 Makefile；优先使用 VS Code 构建任务或显式 `gcc` 命令。

## 项目约定与编码模式
- 文件命名保留章节/题号前缀（不要批量改名）。
- 头文件通常与实现文件同目录（使用 `#include "file.h"`）。
- 平台相关代码用 `#ifdef _WIN32` 保护，常见模式为包含 `windows.h` 并调用 `Sleep()`，否则使用 POSIX `sleep()`（参见 `6_1_CountDownTimer.c`）。
- 示例程序倾向于小函数、少全局状态、单一职责。

## 集成点与依赖
- 无外部包管理器，依赖系统 C 库与 MinGW（Windows）。
- 若引入新依赖，请在 PR 描述中列出确切的 `gcc` 选项与 Windows 步骤。

## AI 代理起始检查清单
1. 打开目标文件及其同目录文件，判断是否为单文件示例还是多文件项目。
2. 若使用头文件（如 `readline.h`），先阅读头文件确认 API，再修改调用方。
3. 使用 VS Code 构建任务或 `gcc -g <file.c> -o <file.exe>` 在本地复现编译错误。
4. 添加辅助函数时优先使用 `static`，尽量保持文件局部性。

## 典型示例（快速定位）
- 平台条件分支示例： `6_1_CountDownTimer.c`。
- 文本处理与模块示例： `15_word/line.c`, `15_word/word.c`, `15_word/line.h`, `15_word/word.h`。
- CLI 数据示例： `16_maintainsPartDB/readline.h`, `16_maintainsPartDB/inventory.c`。
- 常见单文件修改目标： `10_2_2_guess.c`, `11_4_maxmin.c`, `12_3_reverse3.c`, `13_5_remind.c`。
- 参考实现集合： `cprogs2/guess.c`, `cprogs2/inventory.c`, `cprogs2/readline.c`。

## PR 指南（小改动）
- 将改动限制在单个练习或一个小的多文件项目内。
- 在 PR 描述中包含用于本地复现的 `gcc` 命令与平台信息（Windows/MinGW）。

如需我把中文合并回主文件、或创建更详尽的定位（指定行号示例），请告诉我具体偏好。
