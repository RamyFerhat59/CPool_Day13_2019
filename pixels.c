/*
** EPITECH PROJECT, 2019
** pixels.c
** File description:
** pixels
*/

#include <stdlib.h>
#include <SFML/Config.h>
#include "display_framebuffer.h"

int main()
{
    int width;
    int height;
    int bitsPerPixel;
    sfUint8 *pixels;

    wdith = 500;
    height = 500;
    bitsPerPixel = 32;

    display_frambuffer(pixels, witdth, height);

    pixels = malloc(width*height*bitsPerPixel/8);

    pixels[0] = 255;
    pixels[1] = 125;
    pixels[2] = 0;
    pixels[3] = 255;
}
