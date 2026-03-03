<!-- Copilot / AI agent instructions for this repository -->
# Repository overview and quick onboarding

This repository is a collection of C exercise programs (many single-file) derived from "C Programming: A Modern Approach". Files are named with chapter/problem prefixes (e.g. `6_1_CountDownTimer.c`, `10_3_3_poker.c`) and there are a few small multi-file example projects in subfolders such as `15_word/`, `16_maintainsPartDB/` and `cprogs2/`.

Keep changes minimal and file-local: most exercises are standalone programs used for learning. Avoid large-scale refactors that move or rename many files.

## Big-picture structure
- Root: many single-file exercises, each intended to compile to an executable (e.g. `6_1_CountDownTimer.c`).
- `15_word/`: multi-file example with `line.c`, `word.c`, and `line.h`/`word.h` demonstrating modularization.
- `16_maintainsPartDB/`: small project using `readline.*` and an `inventory.c` program that shows simple CLI DB patterns.
- `cprogs2/`: another collection of practice programs and alternate implementations.

When a fix or feature affects more than one file, inspect these folders for related implementations first.

## Build / debug / run conventions (Windows + MinGW)
- Primary compile command used in VS Code task: `C:\MinGW\bin\gcc.exe -fdiagnostics-color=always -g <file.c> -o <fileDir>\\<fileBasenameNoExtension>.exe`.
- For multi-file builds, list source files explicitly and add include paths: `gcc -g 15_word/line.c 15_word/word.c -o 15_word/word.exe`.
- Debug with MinGW/gdb from VS Code C/C++ extension or run `gdb` on the produced `.exe`.
- There is no top-level Makefile or CI; prefer to use the existing VS Code build task or explicit `gcc` commands.

## Project-specific conventions and patterns
- File naming: prefixed with chapter/problem numbers (e.g. `13_7_planet.c`). Keep this pattern when creating new examples.
- Headers: small headers live next to their sources (see `15_word/line.h`, `16_maintainsPartDB/readline.h`). Use relative `#include "file.h"`.
- Conditionals for platform-specific APIs: many examples use `#ifdef _WIN32` to include `windows.h` and call `Sleep()`, otherwise call POSIX `sleep()` (see [6_1_CountDownTimer.c](6_1_CountDownTimer.c)). Preserve these guards when editing cross-platform behavior.
- Minimal global state and single-responsibility functions — many files are intentionally short and focused.

## Integration points and external dependencies
- No external package manager. The code relies on the system C library and MinGW on Windows.
- If you add dependencies, document exact `gcc` flags and any Windows-specific steps in the PR description.

## What an AI agent should do first (practical checklist)
1. Open the target file and nearby folder to detect single-file vs multi-file scope.
2. If the file uses a header from a subfolder (e.g. `readline.h`), read that header to confirm public API before changing callers.
3. Use the VS Code build task or run `gcc -g <file.c> -o <file.exe>` to reproduce compile errors locally.
4. Preserve filename prefixes and small helper functions; when adding helpers, keep them static unless needed elsewhere.

## Examples (explicit references)
- Platform conditional example: [6_1_CountDownTimer.c](6_1_CountDownTimer.c) — shows `#ifdef _WIN32` + `Sleep()` vs `sleep()`.
- Multi-file example: [15_word/line.c](15_word/line.c) and [15_word/word.c](15_word/word.c) with `line.h`/`word.h` demonstrating simple module split.
- Header/example pair: [16_maintainsPartDB/readline.h](16_maintainsPartDB/readline.h) and [16_maintainsPartDB/inventory.c](16_maintainsPartDB/inventory.c) — demonstrates a small CLI DB pattern and `readline` utility.
- Common single-file exercises (quick fixes or style changes): `10_2_2_guess.c`, `11_4_maxmin.c`, `12_3_reverse3.c`, `13_5_remind.c` — these are typical single-file targets for small edits/tests.
- Larger or alternate collections: `cprogs2/guess.c`, `cprogs2/inventory.c`, `cprogs2/readline.c` — use these when you need alternate implementations or reference helpers.
- Data-structure examples: `cprogs2/stackADT.c`, `cprogs2/stackADT.h`, `cprogs2/stackclient.c` — follow these for ADT patterns and header usage.
- Formatting / text examples: `15_word/justify.c`, `15_word/line.c`, `15_word/word.c` — show text processing and linking multiple sources.

When using an example, prefer to show the exact `gcc` command in the PR or local test. For instance to build the `15_word` example:

	gcc -g 15_word/line.c 15_word/word.c -o 15_word/word.exe

Or to build `cprogs2` helper pairs (example):

	gcc -g cprogs2/readline.c cprogs2/inventory.c -o cprogs2/inventory.exe

## What *not* to do
- Don't add a global build system (Makefile, CMake) unless requested — maintainers prefer stand-alone examples.
- Don't rename batches of files; keep the chapter/problem prefix.

## PR guidelines for small changes
- Keep PRs focused to a single exercise or one small multi-file project.
- In PR description include the exact `gcc` command used to reproduce the build locally and platform used (Windows/MinGW).

---
If anything here is unclear or you want the instructions in Chinese, tell me which sections to expand or translate.
If you prefer a Chinese translation, see `docs/copilot-instructions.zh.md`.
 
集成点与依赖：
- 无外部包管理器，依赖系统 C 库与 Windows 下的 MinGW。如需新增依赖，请在 PR 中写明精确的 `gcc` 标志与 Windows 步骤。

AI 代理起始检查清单：
1. 打开目标文件及其同目录文件，判断是否为单文件示例还是多文件项目。
2. 若使用头文件（如 `readline.h`），先阅读头文件确认 API，再修改调用方。
3. 使用 VS Code 构建任务或 `gcc -g <file.c> -o <file.exe>` 本地复现编译错误。
4. 添加辅助函数时，优先使用 `static` 并尽量保持文件局部性。

示例参考：
- 平台条件分支示例： [6_1_CountDownTimer.c](6_1_CountDownTimer.c)。
- 多文件示例： [15_word/line.c](15_word/line.c) 与 [15_word/word.c](15_word/word.c)（含 `line.h`/`word.h`）。
- 头/示例配对： [16_maintainsPartDB/readline.h](16_maintainsPartDB/readline.h) 与 [16_maintainsPartDB/inventory.c](16_maintainsPartDB/inventory.c)。

不建议的做法：
- 非必要不要添加全局构建系统（Makefile/CMake）；维护者偏好独立示例文件。
- 不要批量改名文件，保留题号前缀。

PR 要点：
- 将改动限制在单个练习或一个小的多文件项目内。
- PR 描述中请附上用于本地复现编译/运行的 `gcc` 命令与平台信息（Windows/MinGW）。

如需我把整个指南只保留中文、或把中文移到单独文件，请告诉我你偏好的格式。
