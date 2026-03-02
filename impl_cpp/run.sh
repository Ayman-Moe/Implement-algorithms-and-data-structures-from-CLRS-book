#!/bin/bash
build="build"
rm -rf "$build"
cmake -S . -B "$build"
cmake --build "$build" --config Debug
echo ""
echo "-----------------------------"
echo ""
./"$build"/impl_cpp