#include <openvino/runtime/core.hpp>

int main() {
    ov::Core core;
#ifdef __APPLE__
    core.add_extension("libopenvino_tokenizers.dylib");
#elif _WIN32
    core.add_extension("openvino_tokenizers.dll");
#else
    core.add_extension("libopenvino_tokenizers.so");
#endif
    return 0;
}
