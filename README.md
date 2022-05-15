# Environment configuration is the most difficult

## 1 前言

​        众所周知，**配环境**是一项在开发过程中及其复杂的工作，尤其是对于**项目管理**的新手而言。近段时间由于有很多大作业，配环境占据

了我将近80%的时间，让我无法**专注于工作**，深受其害。为了避免重复配环境，在操作系统、各软件、各版本之间漫无目的地游走，现建

仓记录一下配环境的一些经验。

​       但毋庸置疑的是，配环境帮助你深刻理解某些公司之间产品的斗争与矛盾，也能让你对各工具的技术特性有更基础性的体验。尤其是

关于操作系统之间的不兼容性、软件打包文件之间的不兼容性、同一个软件不同版本之间的不兼容性，这些都是一些大公司不可避免要花

费精力解决的问题。

​       希望有朝一日环境能对开发者变得更加友好。

## 2 C/C++

### 2.1 windows，linux，macos的爱恨情仇

| OS      | Compiler（the most supported） | note           |
| ------- | ------------------------------ | -------------- |
| Windows | MSVC                           | Visual c++(VC) |
| Linux   | GCC                            | gcc/g++        |
| Mac     | LLVM                           | clang/clang++  |

- 注：由于linux野心很大，MINGW（minimal gnu for windows）也很容易在windows上运行。

### 2.2 库文件兼容性

| OS      | 静态库         | 动态库                   |
| ------- | -------------- | ------------------------ |
| Windows | .lib           | .dll                     |
| Linux   | .a             | .so                      |
| Mac     | .a或.framework | .tdb或.dylib或.framework |

- 注：由于windows野心很大，开发了WSL子系统等技术，使得.a和.so在windows下也可以使用。(亲测有效)

### 2.3 MSVC与MINGW的斗争与合作

- 用VS生成的.lib文件，MINGW使用会报错undefined reference.
- 用VS生成的.dll文件，二者都可以使用。

### 2.4 VS的稳健与排外

### 2.5 VScode的野心与无奈

### 2.6 vcpkg包管理工具的野心和无奈



## 3 Java

### 3.1 IDEA的稳健与沉重

### 3.2 Eclipse

### 3.3 VScode





## 4 Python

