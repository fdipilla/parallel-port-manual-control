/*
 * Fabrizio Di Pilla <fdipilla@gnu.org > 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <sys/io.h>

#define PP_ADDR (0x0378) 

int main() {
    int i;

    /* Check root permisions */
    if (ioperm(PP_ADDR, 1, 1)) {
        printf("Please this program as root\n");
        return 1;
    }

    while (1){
        scanf("%i",&i);
        outb(i, PP_ADDR);
    }

    return 0;
}

