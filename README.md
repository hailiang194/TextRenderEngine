# TextRenderEngine

Text Render Engine is a framework used for render Unicode

[![Pipleline-main](https://github.com/hailiang194/TextRenderEngine/actions/workflows/pipelines.yaml/badge.svg?branch=main)](https://github.com/hailiang194/TextRenderEngine/actions/workflows/pipelines.yaml/badge.svg?branch=main)

## Libraries

* freetype 2.13.3

**Note**: See [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) for more details.

## Requirements

* **git**
* **CMake** version 3.5 or above
* **MVSC**, **GCC** or **Clang**

## CI/CD status
| Branches | CI/CD Tools | Status |
| ---      | ---         | ---    |
| ```main```| Github Actions | [![Pipleline-main](https://github.com/hailiang194/TextRenderEngine/actions/workflows/pipelines.yaml/badge.svg?branch=main)](https://github.com/hailiang194/TextRenderEngine/actions/workflows/pipelines.yaml/badge.svg?branch=main) |
| ```development```| Github Actions | [![Pipleline-development](https://github.com/hailiang194/TextRenderEngine/actions/workflows/pipelines.yaml/badge.svg?branch=development)](https://github.com/hailiang194/TextRenderEngine/actions/workflows/pipelines.yaml/badge.svg?branch=development) |

## Installation

### Clone the repository

```bash
git clone https://github.com/hailiang194/TextRenderEngine.git <project_name>
```

### Generate project

```bash
cmake -S . -B <build folder> <other options>
```
**Note**: There are many CMake Cache variables avialable for this project. See [CMakeOptions.cmake](cmake/CMakeOptions.cmake) for more details.

### Build project
```bash
cmake --build <build folder>
```