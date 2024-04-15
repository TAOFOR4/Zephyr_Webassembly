# Zephyr_Webassembly
This is a experiment for running wasm (webassembly) on nRF5340/Raspberry Pi Pico.

## Device and Platform
Devices: nRF52840 , nRF5340, Raspberry Pi Pico
Platform: Ubuntu22 , zephyr


## Structure of this repo

### Sample projects from zephyr and nRF
Under 'zephyr' folder, there are some sample projects from zephyr and nRF sdk.

### nRF5340_Webassembly template
Under 'wasm' folder, this is a general template of running webassembly on nRF5340.

## Tutorial

### Zephyr
Following the [guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html), install Zephyr and setup the environment.

### Webassembly runtime
Here we are using [wasm-micro-runtime](https://github.com/bytecodealliance/wasm-micro-runtime)

Following the [instruction](https://github.com/bytecodealliance/wasm-micro-runtime/blob/main/product-mini/platforms/zephyr/simple/README.md)
