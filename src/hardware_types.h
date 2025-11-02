#ifndef HARDWARE_TYPES_H
#define HARDWARE_TYPES_H

#include <stdint.h>

// STM32-style peripheral register structures for testing

// GPIO Register Structure
typedef struct {
    volatile uint32_t MODER;    // Mode register
    volatile uint32_t OTYPER;   // Output type register
    volatile uint32_t OSPEEDR;  // Output speed register
    volatile uint32_t PUPDR;    // Pull-up/pull-down register
    volatile uint32_t IDR;      // Input data register
    volatile uint32_t ODR;      // Output data register
    volatile uint32_t BSRR;     // Bit set/reset register
    volatile uint32_t LCKR;     // Configuration lock register
    volatile uint32_t AFR[2];   // Alternate function registers
} GPIO_TypeDef;

// USART Register Structure
typedef struct {
    volatile uint32_t SR;       // Status register
    volatile uint32_t DR;       // Data register
    volatile uint32_t BRR;      // Baud rate register
    volatile uint32_t CR1;      // Control register 1
    volatile uint32_t CR2;      // Control register 2
    volatile uint32_t CR3;      // Control register 3
    volatile uint32_t GTPR;     // Guard time and prescaler register
} USART_TypeDef;

// SPI Register Structure
typedef struct {
    volatile uint32_t CR1;      // Control register 1
    volatile uint32_t CR2;      // Control register 2
    volatile uint32_t SR;       // Status register
    volatile uint32_t DR;       // Data register
    volatile uint32_t CRCPR;    // CRC polynomial register
    volatile uint32_t RXCRCR;   // RX CRC register
    volatile uint32_t TXCRCR;   // TX CRC register
    volatile uint32_t I2SCFGR;  // I2S configuration register
    volatile uint32_t I2SPR;    // I2S prescaler register
} SPI_TypeDef;

// CAN Handle Structure (simplified for testing)
typedef struct {
    void *instance;             // CAN peripheral instance
    uint32_t id;                // CAN identifier
    uint8_t data[8];            // CAN data buffer
    uint8_t dlc;                // Data length code
} can_handle_t;

// USART Status Register Bits
#define USART_SR_PE              (1U << 0)  // Parity error
#define USART_SR_FE              (1U << 1)  // Framing error
#define USART_SR_NE              (1U << 2)  // Noise error
#define USART_SR_ORE             (1U << 3)  // Overrun error
#define USART_SR_IDLE            (1U << 4)  // IDLE line detected
#define USART_SR_RXNE            (1U << 5)  // Read data register not empty
#define USART_SR_TC              (1U << 6)  // Transmission complete
#define USART_SR_TXE             (1U << 7)  // Transmit data register empty
#define USART_SR_LBD             (1U << 8)  // LIN break detection flag
#define USART_SR_CTS             (1U << 9)  // CTS flag

#endif // HARDWARE_TYPES_H