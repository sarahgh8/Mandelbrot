#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx-linux/mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
#include <unistd.h>

#define WIDTH 500
#define HEIGHT 500
# define PLUS 65451
# define MINUS 65453 
# define SHIFTING_SCALES 20


typedef struct s_imgdata
{
    int bits_per_pixel;
	int size_line;
    int endian;
    int *buffer;
    
}t_imgdata;

typedef struct s_base
{
    void *mlx;
    void *win;
    void *img;
    long double scale;
    long double x;
    long double y;
    long double iteri;
    t_imgdata image;
}   t_base;

typedef struct s_ccomplex
{
    double x;
    double yi;
}   t_ccomplex;

typedef struct s_zcomplex
{
    double x;
    double yi;
}   t_zcomplex;

typedef struct s_vars
{
    int x;
    int y;
    int i;
}   t_vars;


int draw_mandelbrot(t_base *base);
int is_escaping_mandel(double x, double yi, int iteri);
void get_coord(double *x, double *y, t_base base);
int key_events(int keycode, t_base *base);
int destroy(t_base *base);
int mouse_events(int button, int x, int y, t_base *base);
int ft_strcmp(char *arg, char *str);
void ft_putstr(char *str);
int ft_abs(int n);
void print_usage(void);

#endif