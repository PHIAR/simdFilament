# simdFilament

A port of a subset of the Apple SIMD framework backed by the math utilities of
the Filament 3D engine (https://github.com/google/filament).

## Build

```
swift build -Xcc -I/path/to/filament/include/directory
```

## Test
```
swift test -Xcc -I/path/to/filament/include/directory
```

## Disclaimer

This project arose from internal needs and is not affiliated with Apple or Google.
