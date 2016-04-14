#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

#include "bitmap.h"

void make_bmp_header(t_bmp_header * header, size_t size);
void make_bmp_info_header(t_bmp_info_header * header, size_t size);

int main(void)
{
  t_bmp_header header;
  t_bmp_info_header info;
  int d;
  uint32_t pixel = 0x00FFFFFF;

  make_bmp_header(&header, 32);
  make_bmp_info_header(&info, 32);

  /* Not checking your return values is naugthy naughty naughty */
  d = open("32px.bmp", O_CREAT | O_TRUNC | O_WRONLY, 0644);
  write(d, &header, sizeof(header));
  write(d, &info, sizeof(info));
  for (size_t i = 0; i < 32 * 32; ++i)
    write(d, &pixel, sizeof(pixel));
  close(d);
  return EXIT_SUCCESS;
}
