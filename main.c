#include "fractol.h"

int initialize_base(t_base *base)
{
    base->x = -0.5;
    base->y = 0.0;
    base->scale = 200;
    base->iteri = 50;

    base->mlx = mlx_init();
    if (!base->mlx)
        return 0;

    base->win = mlx_new_window(base->mlx, WIDTH, HEIGHT, "Fract-ol");
    base->img = mlx_new_image(base->mlx, WIDTH, HEIGHT);
    base->image.buffer = (int *)mlx_get_data_addr(base->img, &base->image.bits_per_pixel, &base->image.size_line, &base->image.endian);
    
    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        print_usage();
        return 0;
    }

    t_base base;
    if (!initialize_base(&base))
    {
        destroy(&base);
        return 0;
    }

    if (ft_strcmp(argv[1], "mandelbrot"))
    {
        mlx_loop_hook(base.mlx, draw_mandelbrot, &base);
    }
    else
    {
        print_usage();
        destroy(&base);
        return 0;
    }

    mlx_mouse_hook(base.win, mouse_events, &base);
    mlx_hook(base.win, 2, 1L << 0, key_events, &base);
    mlx_hook(base.win, 17, 0, destroy, &base);
    mlx_loop(base.mlx);

    return 0;
}