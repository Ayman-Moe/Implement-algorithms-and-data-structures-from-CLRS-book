# Implement Algorithms and Data Structures

**Languages:** Rust; C++  
**Based on:** *Introduction to Algorithms* (CLRS), 4th edition

## Overview

This repository contains implementations of algorithms and data structures from *Introduction to Algorithms* (4th ed.).  
The goal is to provide clear, well-tested, and idiomatic implementations in **Rust** for memory safety and **C++** for low-level control and performance practice. Documentation, definitions, and notes live in the `docs/` folder.

## Repository Layout

**Top-level folders**
---
- **docs** — Notes, definitions, algorithm explanations, and references.  
---
- **impl-cpp** — C++ implementations and tests.
---
- **impl-rs** — Rust implementations and tests.

## Getting Started

### Prerequisites

- **C++**: CMake (≥ 3.16), a C++17-compatible compiler (g++, clang or MSVC).  
- **Rust**: Rust toolchain with `cargo` (stable).

### Build and run C++ implementation

* Create a build directory and run CMake:
  * For Windows **powershell**
    ```powershell
        cd impl-cpp
        .\run.ps1
        cd ..
    ```
  * For Linux
    ```bash
        cd impl-cpp
        ./run.sh
        cd ..
    ```

### Build and run Rust implementation
 ```bash
 cd impl-rs
 cargo test
 cd ..
 ```

# Guide And Roadmap


 