# Mandelbrot
[![CI](https://github.com/sarahgh8/Mandelbrot/actions/workflows/ci.yml/badge.svg)](https://github.com/sarahgh8/Mandelbrot/actions/workflows/ci.yml)

Mandelbrot is a small fractal explorer written in C with MiniLibX. It opens a window that renders the Mandelbrot set and lets you zoom, pan, and inspect the image in real time.

![Mandelbrot](https://github.com/user-attachments/assets/7d2b70c5-ba2c-4e69-a816-41f6b3d22072) ![Mandelbrot](https://github.com/user-attachments/assets/cccb6f09-ec37-4dce-92f7-37f6b073bdfd)

## Features

- Zoom in and out with the mouse wheel
- Shift the view with the arrow keys
- Build and run the project locally on Linux

## Installation

### Prerequisites

Install the development packages required by MiniLibX:

```bash
sudo apt-get update
sudo apt-get install -y gcc make libx11-dev libxext-dev libbsd-dev zlib1g-dev
```

### Build and run

```bash
cd minilibx-linux
./configure
cd ..
make
./fractol mandelbrot
```

## Documentation

The full documentation is available at:

- https://sarahgh8.github.io/Mandelbrot/

It includes a getting-started tutorial, setup and troubleshooting how-to guides, and reference documentation for the current CLI behavior.

## Verifying the Release Artifact

This project signs release artifacts using Sigstore Cosign.

Download the release artifact and its Cosign bundle from the GitHub Release page:

- `mandelbrot-v1.0.0.zip`
- `mandelbrot-v1.0.0.zip.bundle`

Then verify the artifact with:

```bash
cosign verify-blob mandelbrot-v1.0.0.zip \
  --bundle mandelbrot-v1.0.0.zip.bundle \
  --certificate-identity "sarahjgh05@gmail.com" \
  --certificate-oidc-issuer "https://github.com/login/oauth"

