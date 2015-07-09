#include <stdio.h>
typedef struct { 
  double v;
  int t;
  char c;
} save_type;

int main()
{
  save_type st = { 12.1f, 17, 'c' };
  FILE *f = fopen("output.bin","w");
  /*
    fwrite( ptr, size, nmemb, stream)
    ptr := This is the pointer to the array of elements to be written
    size := This is the size in bytes of each element to be written
    nmemb := This is the number of elements, each one with a size of size bytes
    stream := This is the pointer to a FILE object that specifies an output stream
  */
  fwrite(&st, sizeof(save_type),1,f);
  fwrite(&st, sizeof(save_type),1,f);
  fwrite(&st, sizeof(save_type),1,f);
  fwrite(&st,sizeof(save_type),1,f);
  fclose(f);
  return 0;
}
