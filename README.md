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
