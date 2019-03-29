all:
	EMCC_FORCE_STDLIBS=1 emcc main.cpp -O3 -s WASM=1 -s MAIN_MODULE=2 -o dynlink.js -s EXTRA_EXPORTED_RUNTIME_METHODS=['loadDynamicLibrary'] -s "EXPORTED_FUNCTIONS=['_main', '_clock']"
	emcc doubler.cpp -o doubler.wasm -s SIDE_MODULE=1 -O3 -s EXPORT_ALL=1
