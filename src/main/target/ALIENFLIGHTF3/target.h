/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "AFF3" // ALIENFLIGHTF3

#define LED0
#define LED0_GPIO   GPIOB
#define LED0_PIN    Pin_4 // Blue LEDs - PB4
#define LED0_PERIPHERAL RCC_AHBPeriph_GPIOB

#define LED1
#define LED1_GPIO   GPIOB
#define LED1_PIN    Pin_5  // Green LEDs - PB5
#define LED1_PERIPHERAL RCC_AHBPeriph_GPIOB

#define BEEPER
#define BEEP_GPIO   GPIOA
#define BEEP_PIN    Pin_5  // White LEDs - PA5
#define BEEP_PERIPHERAL RCC_AHBPeriph_GPIOA

#define USABLE_TIMER_CHANNEL_COUNT 11

// Using MPU6050 for the moment.
#define GYRO
#define USE_GYRO_MPU6050

#define GYRO_MPU6050_ALIGN CW270_DEG

#define ACC
#define USE_ACC_MPU6050

#define ACC_MPU6050_ALIGN CW270_DEG

// No baro support.
//#define BARO
//#define USE_BARO_MS5611

// No mag support for now (option to use MPU9150 in the future).
//#define MAG
//#define USE_MAG_AK8975

#define MAG_AK8975_ALIGN CW0_DEG_FLIP

#define USE_VCP
#define USE_USART1 // Not connected - TX (PB6) RX PB7 (AF7)
#define USE_USART2 // Receiver - RX (PA3)
#define USE_USART3 // Not connected - 10/RX (PB11) 11/TX (PB10)
#define SERIAL_PORT_COUNT 4

#define UART1_TX_PIN        GPIO_Pin_6 // PB6
#define UART1_RX_PIN        GPIO_Pin_7 // PB7
#define UART1_GPIO          GPIOB
#define UART1_GPIO_AF       GPIO_AF_7
#define UART1_TX_PINSOURCE  GPIO_PinSource6
#define UART1_RX_PINSOURCE  GPIO_PinSource7

#define UART2_TX_PIN        GPIO_Pin_2 // PA2
#define UART2_RX_PIN        GPIO_Pin_3 // PA3
#define UART2_GPIO          GPIOA
#define UART2_GPIO_AF       GPIO_AF_7
#define UART2_TX_PINSOURCE  GPIO_PinSource2
#define UART2_RX_PINSOURCE  GPIO_PinSource3

#define UART3_TX_PIN        GPIO_Pin_10 // PB10 (AF7)
#define UART3_RX_PIN        GPIO_Pin_11 // PB11 (AF7)
#define UART3_GPIO_AF       GPIO_AF_7
#define UART3_GPIO          GPIOB
#define UART3_TX_PINSOURCE  GPIO_PinSource10
#define UART3_RX_PINSOURCE  GPIO_PinSource11


#define USE_I2C
#define I2C_DEVICE (I2CDEV_2) // SDA (PA10/AF4), SCL (PA9/AF4)

#define I2C2_SCL_GPIO        GPIOA
#define I2C2_SCL_GPIO_AF     GPIO_AF_4
#define I2C2_SCL_PIN         GPIO_Pin_9
#define I2C2_SCL_PIN_SOURCE  GPIO_PinSource9
#define I2C2_SCL_CLK_SOURCE  RCC_AHBPeriph_GPIOA
#define I2C2_SDA_GPIO        GPIOA
#define I2C2_SDA_GPIO_AF     GPIO_AF_4
#define I2C2_SDA_PIN         GPIO_Pin_10
#define I2C2_SDA_PIN_SOURCE  GPIO_PinSource10
#define I2C2_SDA_CLK_SOURCE  RCC_AHBPeriph_GPIOA

// SPI3
// PA15 38 SPI3_NSS
// PB3  39 SPI3_SCK
// PB4  40 SPI3_MISO
// PB5  41 SPI3_MOSI

#define USE_SPI
#define USE_SPI_DEVICE_3

#define M25P16_CS_GPIO        GPIOA
#define M25P16_CS_PIN         GPIO_Pin_15
#define M25P16_SPI_INSTANCE   SPI3

#define MPU6500_CS_GPIO_CLK_PERIPHERAL   RCC_AHBPeriph_GPIOA
#define MPU6500_CS_GPIO                  GPIOA
#define MPU6500_CS_PIN                   GPIO_Pin_15
#define MPU6500_SPI_INSTANCE             SPI3

#define USE_ADC

#define ADC_INSTANCE         ADC2
#define ADC_DMA_CHANNEL      DMA2_Channel1
#define ADC_AHB_PERIPHERAL   RCC_AHBPeriph_DMA2

//#define BOARD_HAS_VOLTAGE_DIVIDER

#define VBAT_ADC_GPIO        GPIOA
#define VBAT_ADC_GPIO_PIN    GPIO_Pin_4
#define VBAT_ADC_CHANNEL     ADC_Channel_1

#define SPEKTRUM_BIND
// USART2, PA3
#define BIND_PORT  GPIOA
#define BIND_PIN   Pin_3

// alternative defaults for ALIENFLIGHTF3 target
#define HARDWARE_BIND_PLUG

// Hardware bind plug at PB12 (Pin 25)
#define BINDPLUG_PORT  GPIOB
#define BINDPLUG_PIN   Pin_12

#undef BLACKBOX

#undef GPS
#undef GPS_PROTO_NMEA
#undef GPS_PROTO_UBLOX
#undef GPS_PROTO_I2C_NAV
#undef GPS_PROTO_NAZA

#undef TELEMETRY
#undef TELEMETRY_FRSKY
#undef TELEMETRY_HOTT
#undef TELEMETRY_SMARTPORT
#undef TELEMETRY_LTM

// IO - assuming 303 in 64pin package, TODO
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (BIT(2))
#define TARGET_IO_PORTF (BIT(0)|BIT(1)|BIT(4))


#define USED_TIMERS  (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(15) | TIM_N(17))

#define TIMER_APB1_PERIPHERALS (RCC_APB1Periph_TIM2 | RCC_APB1Periph_TIM3)
#define TIMER_APB2_PERIPHERALS (RCC_APB2Periph_TIM1 | RCC_APB2Periph_TIM15 | RCC_APB2Periph_TIM17)
#define TIMER_AHB_PERIPHERALS (RCC_AHBPeriph_GPIOA | RCC_AHBPeriph_GPIOB)

