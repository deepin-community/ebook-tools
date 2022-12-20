#include <epub.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[])
{
  struct epub* e;

  if (argc < 2)
    return EXIT_FAILURE;

  e = epub_open(argv[1], 1 /* enable errors */);
  assert(e != NULL);

  epub_close(e);

  return EXIT_SUCCESS;
}
