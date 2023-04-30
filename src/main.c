/*
 *
 * main.c
 * Copyright 2023 Dirk Gottschalk <dirk.gottschalk1980@googlemail.com>
 *
 */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void help(void)
{
	printf("Available Options:\n\n");
	printf("	-n <number>	Number of loops.\n");
	printf("	-d <delay>	Delay betwen the verses in seconds.\n\n");
	printf("	-h		Show this help.\n\n");
}

int main(int argc, char **argv)
{
	int b;
	int loops;
	int sleeptime;
	int opt;

	loops = 1;
	sleeptime = 0;

	while ((opt = getopt(argc, argv, "n:d:hv")) != -1) {
		switch (opt) {
		case 'n':
			loops = (int)strtol(optarg, NULL, 10);
			break;

		case 'd':
			sleeptime = (int)strtol(optarg, NULL, 10);
			break;

		case 'v':
			/* Show program version and exit */
			printf("%s\n\n", PACKAGE_STRING);
			exit(EXIT_SUCCESS);
			break;

		case 'h':
			help();
			exit(EXIT_SUCCESS);
			break;

		default:
			break;
		}
	}

	printf("\n");

	while (loops > 0) {
		for (b = 99; b >= 0; b--) {
			switch (b) {
			case 0:
				printf("No more bottles of beer on the wall, ");
				printf("no more bottles of beer.\n");
				printf("Go to the store and buy some more, ");
				printf("99 bottles of beer on the wall.\n\n");
				break;

			case 1:
				printf("1 bottle of beer on the wall, ");
				printf("1 bottle of beer.\n");
				printf("If this bottle should happen to fall, no more");
				printf("bottles of beer on the wall\n\n");
				break;

			default:
				printf("%d bottles of beer on the wall, ", b);
				printf("%d bottles of beer.\n", b);
				printf("If one of those bottles should happen to fall, ");
				printf("%d %s of beer on the wall.\n\n", b - 1,
				       ((b - 1) > 1) ? "bottles" : "bottle");
				break;
			}

			if (sleeptime > 0)
				sleep(sleeptime);
		}
		loops--;
	}
	return 0;
}