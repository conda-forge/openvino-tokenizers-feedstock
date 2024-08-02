# !/usr/bin/env bash

$PYTHON -m pip install . -vv \
    "--config-settings=override=cmake.install_components=[openvino_tokenizers_python, openvino_tokenizers_licenses]" \
    "--config-settings=override=cmake.options.BUILD_CPP_EXTENSION=OFF" \
    "--config-settings=override=cmake.build_args=[]"
