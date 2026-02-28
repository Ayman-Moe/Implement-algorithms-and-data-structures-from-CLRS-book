
rm -rf cmake-build-debug
  cmake -S . -B cmake-build-debug -G Ninja
  cmake --build cmake-build-debug
  
echo ""
echo "-----------------------------"
echo ""
./cmake-build-debug/impl_cpp 