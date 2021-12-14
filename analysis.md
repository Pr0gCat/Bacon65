# Analysis

## Power Consume

Max: 500mA



## Components

| Component  | Part                   |
| ---------- | ---------------------- |
| Flash      | `GD25Q40CT`            |
| MCU        | `Nuvoton NUC123SD4AN0` |
| RGB Driver | `MB15042GP`            |



## IOs

### SWD

```
* 3.3v
* ICE_DAT
* ICE_CLK
* /Reset
* GND
```



### J3

```
* * * *
| | | L GND
| | L__ UART0_TX
| L____ UART0_RX
L______ 3.3v
			
*FLASH HERE*
```



### J1-1

```
* * * * * * *
| | | | | | L USB Socket CC
| | | | | L__ USB Socket CC
| | | | L____ GND
| | | L______ GND
| | L________ D+
| L__________ D-
L____________ 5v
```

### DIP

```
```



## Flash



### Pin Map

| Flash Pin | MCU Pin | Identifier |
| --------- | ------- | ---------- |
| CS        | 30      | SPI0_SS0   |
| SO        | 28      | SPI0_MISO0 |
| WP        | NC      | NC         |
| HOLD      | NC      | NC         |
| SCLK      | 29      | SPI0_CLK   |
| SI        | 27      | SPI0_MOSI0 |



## RGB Driver

Chips ID: U7, U8, U3

### U7

### Logic Pin Map

| RGB Driver Pin | Pin  | Identifier |
| -------------- | ---- | ---------- |
| SDI            | 2    |            |
| DCLK           | 53   |            |
| LE             | 52   |            |
| R-EXT          |      |            |
| SDO            |      |            |
| GCLK           |      |            |

### IO Pin Map

| Pin  | Channel(R/G/B) | Horizontal Layer | Vertical Layer |
| ---- | -------------- | ---------------- | -------------- |
|      |                |                  |                |



### U8

### Logic Pin Map

| RGB Driver Pin | Pin  | Identifier |
| -------------- | ---- | ---------- |
| SDI            | 3    |            |
| DCLK           | 53   |            |
| LE             | 52   |            |
| R-EXT          |      |            |
| SDO            |      |            |
| GCLK           |      |            |

### IO Pin Map

| Pin  | Channel(R/G/B) | Horizontal Layer | Vertical Layer |
| ---- | -------------- | ---------------- | -------------- |
|      |                |                  |                |



### U3

### Logic Pin Map

| RGB Driver Pin | Pin  | Identifier |
| -------------- | ---- | ---------- |
| SDI            | 1    |            |
| DCLK           | 53   |            |
| LE             | 52   |            |
| R-EXT          |      |            |
| SDO            |      |            |
| GCLK           |      |            |

### IO Pin Map

| Pin  | Channel(R/G/B) | Horizontal Layer | Vertical Layer |
| ---- | -------------- | ---------------- | -------------- |
|      |                |                  |                |



## Keys

![switch_wiring](C:\Users\LTY\Desktop\Becon65\switch_wiring.jpg)

### Horizontal A.K.A the scan points

| Layer | Pin  | Identifier |
| ----- | ---- | ---------- |
| L1    | 9    | PD11       |
| L2    | 10   | PB4        |
| L3    | 11   | PB5        |
| L4    | 12   | PB6        |
| L5    | 13   | PB7        |

### Vertical (From Logo to right) A.K.A the 

| Layer | Pin  | Identifier |
| ----- | ---- | ---------- |
| L1    | 56   | PF0        |
| L2    | 52   | PD3        |
| L3    | 51   | PD2        |
| L4    | 49   | PD0        |
| L5    | 45   | PA12       |
| L6    | 44   | PA13       |
| L7    | 41   | PA15       |
| L8    | 40   | PC8        |
| L9    | 39   | PC9        |
| L10   | 37   | PC10       |
| L11   | 36   | PC11       |
| L12   | 35   | PC12       |
| L13   | 34   | PC13       |
| L14   | 32   | PB9        |
| L15   | 31   | PB10       |
