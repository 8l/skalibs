/* ISC license. */

#include <sys/types.h>
#include <sys/time.h>

int main (void)
{
  struct timeval foo[2] = { { .tv_sec = 0, .tv_usec = 0 }, { .tv_sec = 0, .tv_usec = 0 } } ;
  futimes(0, foo) ;
  return 0 ;
}