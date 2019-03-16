#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

#define HAL_VCOM_ENABLE

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ADC0]
// [ADC0]$

// $[ANTDIV]
// [ANTDIV]$

// $[BATTERYMON]
// [BATTERYMON]$

// $[BTL_BUTTON]
// [BTL_BUTTON]$

// $[BULBPWM]
// [BULBPWM]$

// $[BULBPWM_COLOR]
// [BULBPWM_COLOR]$

// $[BUTTON]
// [BUTTON]$

// $[CMU]
// [CMU]$

// $[COEX]
// [COEX]$

// $[CS5463]
// [CS5463]$

// $[DCDC]
#define HAL_DCDC_BYPASS            (0)
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[FEM]
// [FEM]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IDAC0]
// [IDAC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
// [LED]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
// [LEUART0]$

// $[PA]
// [PA]$

// $[PCNT0]
// [PCNT0]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
// [PRS]$

// $[PTI]
// [PTI]$

// $[PYD1698]
// [PYD1698]$

// $[SERIAL]
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CLK_PIN      (8U)
#define PORTIO_USART0_CLK_PORT     (gpioPortC)
#define PORTIO_USART0_CLK_LOC      (11U)

#define PORTIO_USART0_CS_PIN       (9U)
#define PORTIO_USART0_CS_PORT      (gpioPortC)
#define PORTIO_USART0_CS_LOC       (11U)

#define PORTIO_USART0_RX_PIN       (7U)
#define PORTIO_USART0_RX_PORT      (gpioPortC)
#define PORTIO_USART0_RX_LOC       (11U)

#define PORTIO_USART0_TX_PIN       (6U)
#define PORTIO_USART0_TX_PORT      (gpioPortC)
#define PORTIO_USART0_TX_LOC       (11U)

// [USART0]$

// $[USART1]
// [USART1]$

// $[VCOM]
//  [VCOM]$

// $[VUART]
// [VUART]$

// $[WDOG]
// [WDOG]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif

#endif /* HAL_CONFIG_H */
