# Using precompiled library
- make a folder `blinky` in lib
- paste `.pio\build\lolin_s3\lib0cb\libblinky.a` and `lib/blinky/blinky.h` (exported from `sdrshnptl/esp32_s3_blink_generate_precompile_library`) to `lib/blinky`
- Add `build_flag` as follows
```
build_flags =
    -L lib/blinky
    -lblinky
```
- `Upload` code