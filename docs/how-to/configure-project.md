# Configure the project

The project is intentionally small and depends on a working X11 toolchain plus the bundled MiniLibX library.

## Prerequisites

Make sure your system has:

- A Linux environment
- GCC and Make
- X11 development headers
- The Xext and BSD development libraries

Install them with:

```bash
sudo apt-get update
sudo apt-get install -y gcc make libx11-dev libxext-dev libbsd-dev zlib1g-dev
```

## Build steps

```bash
cd minilibx-linux
./configure
cd ..
make
```

## Common issues

### The program fails to start

If the window does not open, confirm that the dependencies above are installed and that the MiniLibX build completed successfully.

### `mlx_init` or X11-related errors

These errors usually mean that the X11 development packages are missing or that the display environment is not available. On a local machine, this is typically resolved by installing the packages listed above.

### Build errors from MiniLibX

If the bundled library fails to configure, rerun the commands in the MiniLibX directory and check the terminal output for missing system packages.

## Run the program

```bash
./fractol mandelbrot
```

The executable accepts a single argument, and the current implementation expects `mandelbrot`.