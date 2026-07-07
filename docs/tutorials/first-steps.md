# First steps

This guide walks you through the simplest way to build and run the Mandelbrot viewer on a Linux machine.

## 1. Install the required packages

On Debian or Ubuntu, install the development libraries needed by MiniLibX:

```bash
sudo apt-get update
sudo apt-get install -y gcc make libx11-dev libxext-dev libbsd-dev zlib1g-dev
```

## 2. Prepare MiniLibX

From the repository root, configure the bundled MiniLibX library:

```bash
cd minilibx-linux
./configure
cd ..
```

## 3. Build the project

Back in the project root, build the executable:

```bash
make
```

## 4. Launch the viewer

Run the program with the only supported argument:

```bash
./fractol mandelbrot
```

A window should open and begin rendering the fractal.

## 5. Explore the image

Once the window is open, you can:

- Use the mouse wheel to zoom in and out
- Use the arrow keys to shift the view
- Close the window to exit the program

If the window does not appear, the most common cause is a missing X11 dependency or an issue while building MiniLibX. The troubleshooting guide covers the usual fixes.