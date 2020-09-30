/*
 * Copyright (C) 2016-2017 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_nrf52dk
 * @{
 *
 * @file
 * @brief       Board specific configuration for the nRF52 DK
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 * @author      Sebastian Meiling <s@mlng.net>
 */

#ifndef BOARD_H
#define BOARD_H

#include "board_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    LED pin configuration
 * @{
 */
#define LED0_PIN                       GPIO_PIN(0, 11)
#define LED1_PIN                       GPIO_PIN(0, 12)
#define LED2_PIN                       GPIO_PIN(0, 23)
#define CHARGE_STATUS                  GPIO_PIN(0, 18)
#define HAPTIC                         GPIO_PIN(0, 29)
#define ACCELEROMETER_PWR              GPIO_PIN(0, 28)

#define MAX30101_EN                    GPIO_PIN(0, 23)
#define MAX30101_GREENLED              GPIO_PIN(0, 22)

#define LED_PORT                       (NRF_P0)
#define LED0_MASK                      (1 << 11)
#define LED1_MASK                      (1 << 12)
#define LED2_MASK                      (1 << 29)
#define MAX30101_EN_MASK               (1 << 23)
#define MAX30101_LED_MASK              (1 << 22)

#define ACCELEROMETER_PWR_MASK         (1 << 28)

#define HAPTIC_MASK                    (1 << 29)

#define LED_MASK                       (LED0_MASK | LED1_MASK | HAPTIC_MASK | ACCELEROMETER_PWR_MASK | MAX30101_EN_MASK | MAX30101_LED_MASK)

#define LED0_ON                        (LED_PORT->OUTCLR = LED0_MASK)
#define LED0_OFF                       (LED_PORT->OUTSET = LED0_MASK)
#define LED0_TOGGLE                    (LED_PORT->OUT   ^= LED0_MASK)

#define LED1_ON                        (LED_PORT->OUTCLR = LED1_MASK)
#define LED1_OFF                       (LED_PORT->OUTSET = LED1_MASK)
#define LED1_TOGGLE                    (LED_PORT->OUT   ^= LED1_MASK)

#define LED2_ON                        (LED_PORT->OUTCLR = LED2_MASK)
#define LED2_OFF                       (LED_PORT->OUTSET = LED2_MASK)

#define HAPTIC_ON                      (LED_PORT->OUTCLR = HAPTIC_MASK)
#define HAPTIC_OFF                     (LED_PORT->OUTSET = HAPTIC_MASK)

#define MAX30101_ON                    (LED_PORT->OUTCLR = MAX30101_EN_MASK)
#define MAX30101_OFF                   (LED_PORT->OUTSET = MAX30101_EN_MASK)

#define MAX30101_LED_ON                (LED_PORT->OUTCLR = MAX30101_LED_MASK)
#define MAX30101_LED_OFF               (LED_PORT->OUTSET = MAX30101_LED_MASK)


/** @} */

/**
 * @name    Button pin configuration
 * @{
 */
#define BTN0_PIN                       GPIO_PIN(0, 7)
#define BTN0_MODE                      GPIO_IN_PU
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
