# Mandelbrot

Mandelbrot is a lightweight fractal explorer written in C with MiniLibX. It renders the Mandelbrot set in a window and lets you zoom in, pan around, and inspect the image interactively.

This documentation is meant to help you install the project, run it locally, and understand the available controls.

## What you can do

- Explore the Mandelbrot set in a graphical window
- Zoom in and out with the mouse wheel
- Shift the view with the arrow keys
- Build and run the project locally on Linux with the required X11 libraries

## Quick start

If you already have the dependencies installed, the workflow is straightforward:

```bash
cd minilibx-linux && ./configure
cd ..
make
./fractol mandelbrot
```

## Documentation map

- [First steps](tutorials/first-steps.md) for a guided introduction
- [Configure the project](how-to/configure-project.md) for setup and troubleshooting
- [CLI reference](reference/cli.md) for usage and controls

## Project links

- [GitHub repository](https://github.com/sarahgh8/Mandelbrot)
- [Issues and feedback](https://github.com/sarahgh8/Mandelbrot/issues)