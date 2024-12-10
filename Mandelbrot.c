#include "fractol.h"

int is_escaping_mandel(double c_x, double c_yi, int iteri)
{
    t_vars v;
    t_zcomplex z;
    v.i = 1;
    z.x = 0;
    z.yi = 0;
    double real_z_temp = 0;

    while(v.i < iteri) // z = z^2 + c ==> (a  + bi)^2 + (x + yi)
    {
        real_z_temp = (z.x*z.x) - (z.yi*z.yi) + c_x;
        z.yi = (2 * z.x * z.yi) + c_yi;
        z.x = real_z_temp;
        
        if((z.x*z.x)+(z.yi*z.yi) > 4)
            return v.i;
        v.i++;
    }
    return 0;
}

int draw_mandelbrot(t_base *base)
{
    t_vars v;
    t_ccomplex c;

    v.x = 0;
    v.y = 0;
    v.i = 0;
    while(v.y < HEIGHT)
    {
        while(v.x < WIDTH)
        {
            c.x = v.x;
            c.yi = v.y;
            get_coord(&c.x, &c.yi, *base);
            v.i = is_escaping_mandel(c.x, c.yi, base->iteri);
            if(v.i > 0)
            {
                int offset = v.y * WIDTH + (v.x);
                base->image.buffer[offset] = 0XFCBE11 * v.i;
            }
            else
            {
                int offset = v.y * WIDTH + (v.x);
                base->image.buffer[offset] = 0x000000;
            }
            v.x++;
        }
        v.x = 0;
        v.y++;
    }
    mlx_put_image_to_window(base->mlx, base->win, base->img, 0, 0);
    return 0;
}