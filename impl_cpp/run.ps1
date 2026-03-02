

Remove-item -Recurse -Force "build"

# Configure and build
cmake -S . -B build
cmake --build build --config Debug

 Write-Output 'Running debug build...'
 Write-Output '-----------------------------'
 Write-Output ''
.\build\Debug\impl_cpp.exe

 