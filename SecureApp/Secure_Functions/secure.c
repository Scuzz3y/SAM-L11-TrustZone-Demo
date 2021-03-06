/**
 * Copyright (c) 2017 Microchip Technology Inc.
 *
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "secure.h"    /* Header file with secure interface API */
#include "hal_gpio.h"
#include "hal_delay.h"

#define LED0 GPIO(GPIO_PORTA, 7)

void blink_led_10_s(void)
{
	gpio_toggle_pin_level(LED0);
}

int add_3(int x)
{
	return x + 3;
}

