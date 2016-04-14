/*
** bitmap_header.c for  in /home/simomb_s/piscine_cpp_d01/ex02
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Wed Jan  6 20:28:58 2016 stephanedarcy simomba
** Last update Wed Jan  6 22:47:35 2016 stephanedarcy simomba
*/

#include <stddef.h>
#include <stdint.h>
#include "bitmap.h"

void	make_bmp_header(t_bmp_header *header, size_t size)
{
#if __BYTE_ORDER__ == ORDER_LITTLE_ENDIAN
  header->magic = 0x424D;
#else
  header->magic = 0x424d;
#endif
  header->size = sizeof(header->offset) + 4 * (size * size);
  header->_app1 = 0;
  header->_app2 = 0;
  header->offset = sizeof(t_bmp_header) + sizeof(t_bmp_info_header);
}

void	make_bmp_info_header(t_bmp_info_header *header, size_t size)
{
  header->size = sizeof(t_bmp_info_header);
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = (2 * size) * (header->bpp / 8);
  header->h_resolution = 0;
  header->v_resolution = 0;
  header->palette_size = 0;
  header->important_color = 0;
}
