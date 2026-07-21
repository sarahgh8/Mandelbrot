# Command-line reference

The program currently exposes a small command-line interface.

## Usage

```bash
./fractol mandelbrot
```

### Arguments

- `mandelbrot` launches the Mandelbrot viewer

If the program is started without the required argument, it prints a short usage message and exits.

## Controls

Once the window is running:

- Mouse wheel: zoom in and out
- Arrow keys: move the view around
- Close button: exit the application

## Current behavior

The viewer renders the Mandelbrot set using the bundled MiniLibX implementation and updates the image continuously while the window is open. The project is focused on a single fractal experience rather than a large set of command-line options.
