#include<iostream>
#include<emscripten.h>
// #include<dlfcn.h>

int doubler(int);

using namespace std;

int main() {
    // void* otherLib = dlopen("doubler.wasm", RTLD_LAZY);
    // int (*doubler)(int) = (int (*)(int))dlsym(otherLib, "doubler");
    EM_ASM({
        Module.loadDynamicLibrary('doubler.wasm');
    });
    cout << doubler(5) << endl;
}