/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

/*
   This file has been auto generated from unified-targets repo.

   The auto generation is transitional only.
*/

#define FC_TARGET_MCU     STM32H730

#define BOARD_NAME        SPRACINGH7RF
#define MANUFACTURER_ID   SPRO

#define TARGET_BOARD_IDENTIFIER "SP7R"
#define USBD_PRODUCT_STRING "SPRacingH7RF"
#define EEPROM_SIZE 8192
#define USE_SPRACING_PERSISTENT_RTC_WORKAROUND
#define USE_BUTTONS
#define BUTTON_A_PIN            PE4
#define BUTTON_A_PIN_INVERTED
#define BUTTON_B_PIN            PE4
#define BUTTON_B_PIN_INVERTED
#define USE_OCTOSPI
#define USE_OCTOSPI_DEVICE_1
#define USE_SPI
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PD3
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15
#define SPI2_NSS_PIN            PB12
#define USE_SPI_DEVICE_6
#define SPI6_SCK_PIN            PB3
#define SPI6_MISO_PIN           PB4
#define SPI6_MOSI_PIN           PB5
#define SPI6_NSS_PIN            PA15
#define SX1280_BUSY_PIN         PC7
#define SX1280_DIO1_PIN         PC6
#define SX1280_DIO2_PIN         PD4
#define SX1280_DIO3_PIN         NONE
#define USE_FLASH_MEMORY_MAPPED
#define FLASH_OCTOSPI_INSTANCE  OCTOSPI1
#define CONFIG_IN_MEMORY_MAPPED_FLASH
#define USE_FIRMWARE_PARTITION
#define SDCARD_DETECT_PIN PC13
#define SDCARD_DETECT_INVERTED
#define SDIO_DEVICE             SDIODEV_1
#define SDIO_USE_4BIT           1
#define SDIO_CK_PIN             PC12
#define SDIO_CMD_PIN            PD2
#define SDIO_D0_PIN             PC8
#define SDIO_D1_PIN             PC9
#define SDIO_D2_PIN             PC10
#define SDIO_D3_PIN             PC11
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB (0xffff & ~(BIT(2)|BIT(6)))
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (0xffff & ~(BIT(11)|BIT(12)|BIT(13)))
#define TARGET_IO_PORTE (0xffff & ~(BIT(2)|BIT(7)|BIT(8)|BIT(9)|BIT(10)))
#define TARGET_IO_PORTF 0xffff
#define TARGET_IO_PORTG 0xffff
#define TARGET_IO_PORTH 0xffff
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11
#define MAG_I2C_INSTANCE        (I2CDEV_1)
#define BARO_I2C_INSTANCE       (I2CDEV_2)
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW
#define SX1280_BUSY_PIN         PC7
#define SX1280_DIO1_PIN         PC6
#define SX1280_DIO2_PIN         PD4
#define SX1280_DIO3_PIN         NONE
#define SX1280_NRESET_PIN       PD10
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_SX1280
#define RX_SPI_INSTANCE                                 SPI2
#define RX_NSS_PIN                                      SPI2_NSS_PIN
#define RX_SPI_EXTI_PIN                                 SX1280_DIO1_PIN
#define RX_EXPRESSLRS_SPI_RESET_PIN                     SX1280_NRESET_PIN
#define RX_EXPRESSLRS_SPI_BUSY_PIN                      SX1280_BUSY_PIN
#define RX_EXPRESSLRS_TIMER_INSTANCE                    TIM6
#define DEFAULT_RX_FEATURE      FEATURE_RX_SPI
#define RX_SPI_DEFAULT_PROTOCOL RX_SPI_EXPRESSLRS
#define ADC3_DMA_OPT 10
#define ADC_INSTANCE                  ADC3
#define ADC1_INSTANCE                 ADC1
#define ADC3_INSTANCE                 ADC3
#define CURRENT_METER_2_ADC_PIN       PC0
#define CURRENT_METER_2_ADC_INSTANCE  ADC3
#define CURRENT_METER_1_ADC_PIN       PC1
#define CURRENT_METER_1_ADC_INSTANCE  ADC3
#define EXTERNAL1_ADC_PIN             PC2
#define EXTERNAL1_ADC_INSTANCE        ADC3
#define VBAT_ADC_PIN                  PC3
#define VBAT_ADC_INSTANCE             ADC3
#define VIDEO_IN_ADC_PIN              PC5
#define VIDEO_OUT_ADC_PIN             PC4
#define RSSI_ADC_PIN                  CURRENT_METER_2_ADC_PIN
#define RSSI_ADC_INSTANCE             CURRENT_METER_2_ADC_INSTANCE
#define CURRENT_METER_ADC_PIN         CURRENT_METER_1_ADC_PIN
#define CURRENT_METER_ADC_INSTANCE    CURRENT_METER_1_ADC_INSTANCE
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define VTX_ENABLE_PIN          PC15
#define PINIO1_PIN              VTX_ENABLE_PIN
#define USE_ACC_SPI_ICM42605
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM42605
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO_BMP388
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_FLASH_W25Q128FV
#define USE_SDCARD
#define USE_OSD
#define SPRACING_PIXEL_OSD_BLACK_PIN                    PE12
#define SPRACING_PIXEL_OSD_WHITE_PIN                    PE13
#define SPRACING_PIXEL_OSD_MASK_ENABLE_PIN              PE14
#define SPRACING_PIXEL_OSD_WHITE_SOURCE_SELECT_PIN      PE15
#define SPRACING_PIXEL_OSD_SYNC_IN_PIN                  PE11
#define SPRACING_PIXEL_OSD_SYNC_OUT_PIN                 PA8
#define SPRACING_PIXEL_OSD_WHITE_SOURCE_PIN             PA4
#define SPRACING_PIXEL_OSD_VIDEO_THRESHOLD_DEBUG_PIN    PA5
#define SPRACING_PIXEL_OSD_PIXEL_DEBUG_1_PIN            PE5
#define SPRACING_PIXEL_OSD_PIXEL_DEBUG_2_PIN            PE6
#define SPRACING_PIXEL_OSD_PIXEL_GATING_DEBUG_PIN       PB0
#define SPRACING_PIXEL_OSD_PIXEL_BLANKING_DEBUG_PIN     PB1
