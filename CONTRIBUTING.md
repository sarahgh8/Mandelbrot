# Contributing to Mandelbrot

Thank you for contributing to the Mandelbrot project.

## Setup

Clone the repository with its MiniLibX submodule:

```bash
git clone --recurse-submodules https://github.com/sarahgh8/Mandelbrot.git
cd Mandelbrot
```

Install the required dependencies on Ubuntu:

```bash
sudo apt update
sudo apt install build-essential libx11-dev libxext-dev libbsd-dev zlib1g-dev
```

Build and run the project:

```bash
make -C minilibx-linux
make CC=gcc
./fractol mandelbrot
```

## Running Tests

Before submitting a pull request, rebuild the project:

```bash
make fclean
make CC=gcc
```

The build must finish without warnings or errors.

Run the command-line smoke test:

```bash
./fractol > usage.txt
grep -q "Invalid argument" usage.txt
grep -q "Usage: ./fractol mandelbrot" usage.txt
rm usage.txt
```

Also run the visualizer manually and confirm that rendering, zooming, and movement work correctly:

```bash
./fractol mandelbrot
```

## Filing a Bug

Before opening a bug report, check whether the issue has already been reported.

Include:

- Steps to reproduce the problem
- Expected and actual behavior
- Your operating system
- Your GCC version
- Relevant errors or screenshots

Do not report security vulnerabilities publicly. Follow the instructions in `SECURITY.md`.

## Pull Request Conventions

Create a separate branch for your changes:

```bash
git switch -c fix/short-description
```

Use branch names such as:

- `fix/zoom-crash`
- `feature/new-color-mode`
- `docs/update-readme`

Keep each pull request focused on one change. Use a clear title, explain what you changed, and describe how you tested it.

Make sure the project builds successfully before opening the pull request.

## Review Expectations

Pull requests will be reviewed for:

- Correctness
- Clear and readable code
- Successful build and tests
- Changes that match the purpose of the pull request

Requested changes should be added to the same branch and pull request. A pull request can be merged after the checks pass and all review comments are addressed.

Contributions are distributed under the GNU General Public License version 3, which protects users’ freedom to share and modify the software. :contentReference[oaicite:0]{index=0}