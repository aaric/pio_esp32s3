# pio_esp32s3

> ESP32-S3 Dev With PlatformIO.

## 1 Config aliyun pip mirror

&emsp;&emsp;~~`~\.platformio\penv\pip.conf`~~

```ini
[global]
user=no
timeout=6000
index-url = https://mirrors.aliyun.com/pypi/simple/

[install]
trusted-host = mirrors.aliyun.com
```

## 2 Build this project

```bash
~\.platformio\penv\Scripts\pio run -t build
```

## 3 0.96inch_LCD

### 3.1 User_Setup.h

```c
#define ST7735_DRIVER

#define TFT_WIDTH  80
#define TFT_HEIGHT 160

#define TFT_MOSI 5
#define TFT_SCLK 4
#define TFT_CS   15
#define TFT_DC   7
#define TFT_RST  6
#define TFT_BL   16
```

### 3.2 User_Setup_Select.h

`NA`
