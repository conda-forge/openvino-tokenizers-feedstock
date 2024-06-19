#include <openvino/runtime/core.hpp>

int main() try {
    ov::Core core;
#ifdef __APPLE__
    core.add_extension("libopenvino_tokenizers.dylib");
#elif _WIN32
    core.add_extension("openvino_tokenizers.dll");
#else
    core.add_extension("libopenvino_tokenizers.so");
#endif
    return 0;
} catch (const std::exception& error) {
    std::cerr << error.what() << '\n';
    return 1;
} catch (...) {
    std::cerr << "Non-exception object thrown\n";
    return 2;
}
