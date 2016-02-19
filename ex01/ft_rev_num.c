/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ft_rev_num.c
 * Author: igor
 *
 * Created on February 2, 2016, 1:28 PM
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int ft_rev_num(int n)
{
  int reverse;
  int rem;
  
  reverse = 0;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  return reverse;
}
