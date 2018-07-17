/* main.c

   Copyright (C) 2015-2018 Mariano Ruiz <mrsarm@gmail.com>
   This file is part of the "Frequency Counter" project.

   This project is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 3 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the "C-Types sizes" project; if not, see
   <http://www.gnu.org/licenses/>.  */


#include <stdio.h>


int main() {
    printf("char:\t\t%ld bytes\t\t(%ld bits)\n", sizeof(char), sizeof(char)*8);
    printf("short:\t\t%ld bytes\t\t(%ld bits)\n", sizeof(short), sizeof(short)*8);
    printf("int:\t\t%ld bytes\t\t(%ld bits)\n", sizeof(int), sizeof(int)*8);
    printf("long int:\t%ld bytes\t\t(%ld bits)\n", sizeof(long int), sizeof(long int)*8);
    printf("long long:\t%ld bytes\t\t(%ld bits)\n", sizeof(long long), sizeof(long long)*8);
    printf("float:\t\t%ld bytes\t\t(%ld bits)\n", sizeof(float), sizeof(float)*8);
    printf("double:\t\t%ld bytes\t\t(%ld bits)\n", sizeof(double), sizeof(double)*8);
    printf("long double:\t%ld bytes\t(%ld bits)\n", sizeof(long double), sizeof(long double)*8);
#ifdef __SIZEOF_INT128__
    printf("__int128_t:\t%ld bytes\t(%ld bits)\n", sizeof(__int128_t), sizeof(__int128_t)*8);
#endif
    printf("void *:\t\t%ld bytes\t\t(%ld bits)\n", sizeof(void *), sizeof(void *)*8);
    return 0;
}
