# Set up environment for testing
#     swift test -Xcc -I/filament-math

FROM swift

RUN apt-get update && apt-get install --no-install-recommends --yes subversion \
    && rm -rf /var/lib/apt/lists/*
RUN svn checkout https://github.com/google/filament/trunk/libs/math/include filament-math