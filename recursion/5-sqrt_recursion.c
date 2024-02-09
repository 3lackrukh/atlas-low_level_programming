#include <stdio.h>

/**
 * _sqrt_recursion- returns the natural square root of a number.
 *
 * @n: the number.
 *
 * Return: the natural square root of the number. If the number does not have
 * a natural square root, -1.
 */

int _sqrt_recursion(int n)
{
  int low = 0;
  int high = n;
  int mid = ((high - low) / 2);
  int res = (mid * mid);
  
  if (n == 1)
  {
    return (1);
  }
  else if (n < 1)
  {
    return (-1);
  }
  else if (res == n)
  {
    return (res);
  }
  else if (res < n)
  {
    low = mid;
  }
  else if (res > n)
  {
    high = mid;
    
  }
}
