
Remove-Item  -Recurse -Force  cmake-build-debug
mkdir cmake-build-debug
cd cmake-build-debug
cmake ..
cmake --build . --config Debug
echo "Running debug build..."
echo "-----------------------------"
echo ""
.\impl_cpp.exe
cd ..