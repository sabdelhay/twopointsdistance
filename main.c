/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2017 sherif Abdelhay <sabdelhay@gmx.com>
 * 
 * TwoPointsDistance is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * TwoPointsDistance is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void twopoints(){

    int x1,y1,z1,x2,y2,z2;
    double *point1[] = {x1,y1,z1};
    double *point2[] = {x2,y2,z2};
    double base = 2;

    for(int i = 0; i <= 2; i++){
        scanf("%lf", &point1[i]);
        scanf("%lf", &point1[i]);

        for(int j =0; j<=2; j++){

          *point1[j] = double pow(double point1[j] , double base);
          *point2[j] = double pow(double point2[j] , double base);
        }

	}

	int i = 0;
	int result[i];

    for ( ; i < 3 ; ++i){

        result[i] = point2[i] - point1[i];
        printf("%d ", result[i]);
    }
}

int main()
{
    twopoints();
}

