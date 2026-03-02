# Implement Algorithms and Data Structures

**Languages:** Rust; C++  
**Based on:** *Introduction to Algorithms* (CLRS), 4th edition

## Overview

This repository contains implementations of algorithms and data structures from *Introduction to Algorithms* (4th ed.).  
The goal is to provide clear, well-tested, and idiomatic implementations in **Rust** for memory safety and **C++** for low-level control and performance practice. Documentation, definitions, and notes live in the [docs/](./docs) folder.

## Repository Layout

**Top-level folders**
---
- **[docs/](./docs)** — Notes, definitions, algorithm explanations, and references arranged in ***[algo/](./docs/algo)*** for algorithms, ***[data_structure/](./docs/data_structure)*** for data structure and ***[general/](./docs/general)*** for general definitions .  
---
- **[impl_cpp/](./impl_cpp)** — C++ implementations 
  - [include/](./impl_cpp/include) contain [algo/](./impl_cpp/include/algo) for algorithms implementations and [data_structure/](./impl_cpp/include/data_structure) for data structure implementations.
  
  - [test_func/](./impl_cpp/test_func/) contain [algo/](./impl_cpp/test_func/algo) and [data-structure/](./impl_cpp/test_func/data_structure).

  - [CMakeLists.txt](./impl_cpp/CMakeLists.txt) for cmake build tool.

  - [run.ps1](./impl_cpp/run.ps1) for run Test unites in Windows platform.

  - [run.sh](./impl_cpp/run.sh) for run Test unites in Unix platforms.

---
- **[impl_rs/](./impl_rs)** — Rust implementations 
  - [src/](./impl_rs/src/) contain source code.

  -  [algo/](./impl_rs/src/algo)  for algorithms implementations.

  - [data_structure/](./impl_rs/src/data_structure) for data structure implementations.
 
  - [lib.rs](./impl_rs/src/lib.rs) for Announcing the units

## Getting Started

### Prerequisites

- **C++**: CMake (≥ 3.16), Ninja-Build tool, a C++17-compatible compiler (g++, clang or MSVC).  
- **Rust**: Rust toolchain with `cargo` (stable).

### Build and run C++ test unites

* Create a build directory and run CMake:
  * For Windows **powershell**
    ```powershell
        cd impl_cpp
        .\run.ps1
        cd ..
    ```
  * For Linux
    ```bash
        cd impl_cpp
        ./run.sh
        cd ..
    ```

### Build and run Rust test unites
 ```bash
 cd impl_rs
 cargo test
 cd ..
 ```

# Guide And Roadmap
 **this guide will link the documentations with implementation.**

 