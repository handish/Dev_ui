/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_SS_Pin GPIO_PIN_4
#define LCD_SS_GPIO_Port GPIOE
#define UI_INPUT11_Pin GPIO_PIN_3
#define UI_INPUT11_GPIO_Port GPIOE
#define LCD_SCLK_Pin GPIO_PIN_2
#define LCD_SCLK_GPIO_Port GPIOE
#define OUT3_1V8_Pin GPIO_PIN_14
#define OUT3_1V8_GPIO_Port GPIOG
#define LED_I2C_SCL_Pin GPIO_PIN_8
#define LED_I2C_SCL_GPIO_Port GPIOB
#define SOC_UART_TX_3V3_Pin GPIO_PIN_12
#define SOC_UART_TX_3V3_GPIO_Port GPIOC
#define LCD_MISO_Pin GPIO_PIN_5
#define LCD_MISO_GPIO_Port GPIOE
#define LCD_MOSI_Pin GPIO_PIN_6
#define LCD_MOSI_GPIO_Port GPIOE
#define LED_I2C_SDA_Pin GPIO_PIN_9
#define LED_I2C_SDA_GPIO_Port GPIOB
#define UI_INPUT0_Pin GPIO_PIN_7
#define UI_INPUT0_GPIO_Port GPIOB
#define SPARE_TIM_Pin GPIO_PIN_6
#define SPARE_TIM_GPIO_Port GPIOB
#define SPARE_UART_RX_3V3_Pin GPIO_PIN_11
#define SPARE_UART_RX_3V3_GPIO_Port GPIOC
#define SPARE_UART_TX_3V3_Pin GPIO_PIN_10
#define SPARE_UART_TX_3V3_GPIO_Port GPIOC
#define OUT3_CONFIG_Pin GPIO_PIN_8
#define OUT3_CONFIG_GPIO_Port GPIOI
#define OUT1_CONFIG_Pin GPIO_PIN_4
#define OUT1_CONFIG_GPIO_Port GPIOI
#define DWN_BTN_Pin GPIO_PIN_7
#define DWN_BTN_GPIO_Port GPIOK
#define DWN_BTN_EXTI_IRQn EXTI9_5_IRQn
#define SEL_BTN_Pin GPIO_PIN_6
#define SEL_BTN_GPIO_Port GPIOK
#define SEL_BTN_EXTI_IRQn EXTI9_5_IRQn
#define UP_BTN_Pin GPIO_PIN_5
#define UP_BTN_GPIO_Port GPIOK
#define UP_BTN_EXTI_IRQn EXTI9_5_IRQn
#define UI_INPUT1_Pin GPIO_PIN_13
#define UI_INPUT1_GPIO_Port GPIOC
#define SPARE_I2C_SDA_3V3_Pin GPIO_PIN_0
#define SPARE_I2C_SDA_3V3_GPIO_Port GPIOF
#define OUT2_CONFIG_Pin GPIO_PIN_6
#define OUT2_CONFIG_GPIO_Port GPIOI
#define BCK_BTN_Pin GPIO_PIN_4
#define BCK_BTN_GPIO_Port GPIOK
#define BCK_BTN_EXTI_IRQn EXTI4_IRQn
#define UI_INPUT2_Pin GPIO_PIN_4
#define UI_INPUT2_GPIO_Port GPIOD
#define SOC_UART_RX_3V3_Pin GPIO_PIN_2
#define SOC_UART_RX_3V3_GPIO_Port GPIOD
#define SPARE_I2C_SCL_3V3_Pin GPIO_PIN_1
#define SPARE_I2C_SCL_3V3_GPIO_Port GPIOF
#define MCU_HEARTBEAT_Pin GPIO_PIN_12
#define MCU_HEARTBEAT_GPIO_Port GPIOI
#define MCU_CTRL2_Pin GPIO_PIN_1
#define MCU_CTRL2_GPIO_Port GPIOK
#define SOC_I2C_SDA_3V3_Pin GPIO_PIN_9
#define SOC_I2C_SDA_3V3_GPIO_Port GPIOC
#define SOC_I2C_SCL_3V3_Pin GPIO_PIN_8
#define SOC_I2C_SCL_3V3_GPIO_Port GPIOA
#define BTN0_Pin GPIO_PIN_2
#define BTN0_GPIO_Port GPIOF
#define MCU_CTRL1_Pin GPIO_PIN_0
#define MCU_CTRL1_GPIO_Port GPIOK
#define BTN1_Pin GPIO_PIN_3
#define BTN1_GPIO_Port GPIOF
#define BTN2_Pin GPIO_PIN_4
#define BTN2_GPIO_Port GPIOF
#define SPARE_SS_L_3V3_Pin GPIO_PIN_5
#define SPARE_SS_L_3V3_GPIO_Port GPIOH
#define ADC15_Pin GPIO_PIN_7
#define ADC15_GPIO_Port GPIOF
#define ADC14_Pin GPIO_PIN_6
#define ADC14_GPIO_Port GPIOF
#define BTN3_Pin GPIO_PIN_5
#define BTN3_GPIO_Port GPIOF
#define OUT0_CONFIG_Pin GPIO_PIN_2
#define OUT0_CONFIG_GPIO_Port GPIOH
#define UI_INPUT10_Pin GPIO_PIN_15
#define UI_INPUT10_GPIO_Port GPIOD
#define UI_INPUT5_Pin GPIO_PIN_10
#define UI_INPUT5_GPIO_Port GPIOD
#define PP_SPARE_I2C_ADC_Pin GPIO_PIN_10
#define PP_SPARE_I2C_ADC_GPIO_Port GPIOF
#define ZION_SENSE_Pin GPIO_PIN_9
#define ZION_SENSE_GPIO_Port GPIOF
#define PP_CONFIG_ADC_Pin GPIO_PIN_8
#define PP_CONFIG_ADC_GPIO_Port GPIOF
#define ADC13_Pin GPIO_PIN_3
#define ADC13_GPIO_Port GPIOC
#define UI_INPUT9_Pin GPIO_PIN_14
#define UI_INPUT9_GPIO_Port GPIOD
#define ZION_PWR_EN_Pin GPIO_PIN_12
#define ZION_PWR_EN_GPIO_Port GPIOB
#define UI_INPUT4_Pin GPIO_PIN_9
#define UI_INPUT4_GPIO_Port GPIOD
#define UI_INPUT3_Pin GPIO_PIN_8
#define UI_INPUT3_GPIO_Port GPIOD
#define ADC10_Pin GPIO_PIN_0
#define ADC10_GPIO_Port GPIOC
#define ADC11_Pin GPIO_PIN_1
#define ADC11_GPIO_Port GPIOC
#define ADC12_Pin GPIO_PIN_2
#define ADC12_GPIO_Port GPIOC
#define BTN4_Pin GPIO_PIN_12
#define BTN4_GPIO_Port GPIOF
#define OUT1_1V8_Pin GPIO_PIN_1
#define OUT1_1V8_GPIO_Port GPIOG
#define STM_ZION_I2C_SDA_Pin GPIO_PIN_15
#define STM_ZION_I2C_SDA_GPIO_Port GPIOF
#define MCU_CTRL0_Pin GPIO_PIN_4
#define MCU_CTRL0_GPIO_Port GPIOJ
#define UI_INPUT7_Pin GPIO_PIN_12
#define UI_INPUT7_GPIO_Port GPIOD
#define UI_INPUT8_Pin GPIO_PIN_13
#define UI_INPUT8_GPIO_Port GPIOD
#define OUT1_OD_Pin GPIO_PIN_3
#define OUT1_OD_GPIO_Port GPIOG
#define OUT0_OD_Pin GPIO_PIN_2
#define OUT0_OD_GPIO_Port GPIOG
#define FRONT_LED_CTRL_Pin GPIO_PIN_12
#define FRONT_LED_CTRL_GPIO_Port GPIOH
#define ADC1_Pin GPIO_PIN_1
#define ADC1_GPIO_Port GPIOA
#define ADC0_Pin GPIO_PIN_0
#define ADC0_GPIO_Port GPIOA
#define ADC4_Pin GPIO_PIN_4
#define ADC4_GPIO_Port GPIOA
#define PP_SPARE_SPI_ADC_Pin GPIO_PIN_4
#define PP_SPARE_SPI_ADC_GPIO_Port GPIOC
#define BTN5_Pin GPIO_PIN_13
#define BTN5_GPIO_Port GPIOF
#define OUT0_1V8_Pin GPIO_PIN_0
#define OUT0_1V8_GPIO_Port GPIOG
#define UART_MUX_CTRL_Pin GPIO_PIN_3
#define UART_MUX_CTRL_GPIO_Port GPIOJ
#define FTDI_UART_RX_Pin GPIO_PIN_8
#define FTDI_UART_RX_GPIO_Port GPIOE
#define UI_INPUT6_Pin GPIO_PIN_11
#define UI_INPUT6_GPIO_Port GPIOD
#define OUT2_1V8_Pin GPIO_PIN_5
#define OUT2_1V8_GPIO_Port GPIOG
#define SPARE_MISO_3V3_Pin GPIO_PIN_7
#define SPARE_MISO_3V3_GPIO_Port GPIOH
#define ADC2_Pin GPIO_PIN_2
#define ADC2_GPIO_Port GPIOA
#define ADC6_Pin GPIO_PIN_6
#define ADC6_GPIO_Port GPIOA
#define ADC5_Pin GPIO_PIN_5
#define ADC5_GPIO_Port GPIOA
#define PP_SPARE_UART_ADC_Pin GPIO_PIN_5
#define PP_SPARE_UART_ADC_GPIO_Port GPIOC
#define STM_ZION_I2C_SCL_Pin GPIO_PIN_14
#define STM_ZION_I2C_SCL_GPIO_Port GPIOF
#define SPARE_MOSI_3V3_Pin GPIO_PIN_11
#define SPARE_MOSI_3V3_GPIO_Port GPIOF
#define FTDI_UART_CTS_L_Pin GPIO_PIN_9
#define FTDI_UART_CTS_L_GPIO_Port GPIOE
#define EDL_EN_Pin GPIO_PIN_10
#define EDL_EN_GPIO_Port GPIOB
#define SPARE_SCLK_3V3_Pin GPIO_PIN_6
#define SPARE_SCLK_3V3_GPIO_Port GPIOH
#define LCD_EXTCOMM_Pin GPIO_PIN_10
#define LCD_EXTCOMM_GPIO_Port GPIOH
#define ADC3_Pin GPIO_PIN_3
#define ADC3_GPIO_Port GPIOA
#define ADC7_Pin GPIO_PIN_7
#define ADC7_GPIO_Port GPIOA
#define ADC9_Pin GPIO_PIN_1
#define ADC9_GPIO_Port GPIOB
#define ADC8_Pin GPIO_PIN_0
#define ADC8_GPIO_Port GPIOB
#define LCD_EXTMODE_Pin GPIO_PIN_0
#define LCD_EXTMODE_GPIO_Port GPIOJ
#define LCD_DISP_Pin GPIO_PIN_1
#define LCD_DISP_GPIO_Port GPIOJ
#define FTDI_UART_TX_Pin GPIO_PIN_7
#define FTDI_UART_TX_GPIO_Port GPIOE
#define FTDI_UART_RTS_L_Pin GPIO_PIN_10
#define FTDI_UART_RTS_L_GPIO_Port GPIOE
#define SPARE_SW_EN_Pin GPIO_PIN_11
#define SPARE_SW_EN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
/* Button Press Decode Defines */
#define UP		1
#define	DWN		2
#define BACK	3
#define SEL		4

/* Button Flag definition (shared between Button Task and Navigation Task) */
//extern uint8_t button_press;

/* Navigation control defines */
#define MAX_MENU_ITEMS	4
#define MENU_TOP		1

//extern uint8_t curr_highlight;

#define NOTIFY_NOCLEAR		0x00
#define	NOTIFY_CLEARALL		0xFF
#define	NOTIFY_BTN_MASK		0x0F
#define	NOTIFY_MENU_MASK	0xF0
#define NOTIFY_MENU_BIT		4

#define NO_BTN_PRESS		5
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
