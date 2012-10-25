// Alignment.c
// Demonstrates what happens if different data types (short, int...) are lined
// up against an array of bytes.
#include <stdio.h>
int main (int argc, char** argv)
{
  char f[] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0f};
  short * g;
  int data, i;

  g = (short *)f;
  data = g[1];
  printf("f: ");
  for (i=0; i<16; i++) printf("%02X ", f[i]);
  printf("\n");
  printf("g = (short *)f;\n");
  printf("data = g[1];\n");
  printf("*((short*)(&g[2])): 0x%04X %d, *((int*)(&g[0])): 0x%08X %d, data: 0x%08X %d\n",
  *((short*)(&g[2])), *((short*)(&g[2])),
  *((int*)(&g[0])), *((int*)(&g[0])),
  data, data);

  return 0;
}
