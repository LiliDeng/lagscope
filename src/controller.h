// ----------------------------------------------------------------------------------
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
// Author: Shihua (Simon) Xiao, sixiao@microsoft.com
// ----------------------------------------------------------------------------------

#ifndef CONTROLLER_H
#define CONTROLLER_H

#define _GNU_SOURCE

#include "common.h"
#include "logger.h"

void turn_on_light( void );
void turn_off_light( void );
void wait_light_on( void );
void wait_light_off( void );
int is_light_turned_on( void );

void sig_handler(int signo);
void run_test_timer(int duration);

#endif // CONTROLLER_H
