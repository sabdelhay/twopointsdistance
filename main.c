/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2017 DevC <devc@DevC>
 * 
 * TowPoints is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * TowPoints is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * TwoPoints is a software to measure the distance between two points in 3D space
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
		
	double x0 = 0;
	double y0 = 0;
	double z0 = 0;
	double x1 = 0;
	double y1 = 0;
	double z1 = 0;

	double result[3];
	double distance = 0;
	
	double point_1[] = {x0,y0,z0};
	
	double point_2[] = {x1,y1,z1};
	int size = 3;
	
	printf("Enter point 1 coordinates: ");
	for(int i = 0; i < size; i++){
		scanf("%lf", &point_1[i]);
	}
	printf("Enter point 2 coordinates: ");
	for(int j = 0; j < size; j++){
		scanf("%lf", &point_2[j]);
	}

	
	for(int i = 0; i < size; i++){
		result[i] = sqrt(abs(point_2[i] - point_1[i]));
		distance += result[i];
	}
	printf("Distance is: %.4f\n", distance);
		
	return 0;
}

