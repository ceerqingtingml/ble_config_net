# ble_config_net demo

This demo is used to set up wifi connection via ble, and it is based on esp-idf V4.0

test result:

```bash
mali@ubuntu:~/learning/my_blufi_demo/ble_config_net/ble_config_net$ make monitor
Toolchain path: /home/mali/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-gcc
Toolchain version: esp-2019r2
Compiler version: 8.2.0
Python requirements from /home/mali/esp/esp-idf/requirements.txt are satisfied.
MONITOR
--- idf_monitor on /dev/ttyUSB0 115200 ---
--- Quit: Ctrl+] | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
ets Jun  8 2016 00:22:57

rst:0x1 (POWERON_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0018,len:4
load:0x3fff001c,len:6880
ho 0 tail 12 room 4
load:0x40078000,len:14724
load:0x40080400,len:4292
entry 0x400806e4
I (75) boot: Chip Revision: 1
I (75) boot_comm: chip revision: 1, min. bootloader chip revision: 0
I (41) boot: ESP-IDF v4.0.1-316-g48ea44f3d-dirty 2nd stage bootloader
I (41) boot: compile time 11:55:50
I (42) boot: Enabling RNG early entropy source...
I (47) boot: SPI Speed      : 40MHz
I (51) boot: SPI Mode       : DIO
I (55) boot: SPI Flash Size : 4MB
I (59) boot: Partition Table:
I (63) boot: ## Label            Usage          Type ST Offset   Length
I (70) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (78) boot:  1 phy_init         RF data          01 01 0000f000 00001000
I (85) boot:  2 factory          factory app      00 00 00010000 00200000
I (93) boot: End of partition table
I (97) boot_comm: chip revision: 1, min. application chip revision: 0
I (104) esp_image: segment 0: paddr=0x00010020 vaddr=0x3f400020 size=0x2d008 (184328) map
I (178) esp_image: segment 1: paddr=0x0003d030 vaddr=0x3ffbdb60 size=0x02fe0 ( 12256) load
I (183) esp_image: segment 2: paddr=0x00040018 vaddr=0x400d0018 size=0xc6cc4 (814276) map
0x400d0018: _stext at ??:?

I (473) esp_image: segment 3: paddr=0x00106ce4 vaddr=0x3ffc0b40 size=0x00e58 (  3672) load
I (475) esp_image: segment 4: paddr=0x00107b44 vaddr=0x40080000 size=0x00400 (  1024) load
0x40080000: _WindowOverflow4 at /home/mali/esp/esp-idf/components/freertos/xtensa_vectors.S:1778

I (481) esp_image: segment 5: paddr=0x00107f4c vaddr=0x40080400 size=0x1c814 (116756) load
I (555) boot: Loaded app from partition at offset 0x10000
I (555) boot: Disabling RNG early entropy source...
I (556) cpu_start: Pro cpu up.
I (559) cpu_start: Application information:
I (564) cpu_start: Project name:     ble_config_net
I (570) cpu_start: App version:      6db59b6-dirty
I (575) cpu_start: Compile time:     Jul 29 2020 11:55:53
I (581) cpu_start: ELF file SHA256:  9fbfbed8b20f5fe1...
I (587) cpu_start: ESP-IDF:          v4.0.1-316-g48ea44f3d-dirty
I (594) cpu_start: Starting app cpu, entry point is 0x40081284
0x40081284: call_start_cpu1 at /home/mali/esp/esp-idf/components/esp32/cpu_start.c:267

I (0) cpu_start: App cpu up.
I (604) heap_init: Initializing. RAM available for dynamic allocation:
I (611) heap_init: At 3FFAFF10 len 000000F0 (0 KiB): DRAM
I (617) heap_init: At 3FFB6388 len 00001C78 (7 KiB): DRAM
I (623) heap_init: At 3FFB9A20 len 00004108 (16 KiB): DRAM
I (629) heap_init: At 3FFBDB5C len 00000004 (0 KiB): DRAM
I (635) heap_init: At 3FFCE9E0 len 00011620 (69 KiB): DRAM
I (642) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (648) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (654) heap_init: At 4009CC14 len 000033EC (12 KiB): IRAM
I (661) cpu_start: Pro cpu start user code
I (679) spi_flash: detected chip: generic
I (680) spi_flash: flash io: dio
I (680) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
/home/mali/learning/my_blufi_demo/ble_config_net/ble_config_net/components/ble_spp_server/src/ble_spp_server.c:666, ble_spp_init
I (749) BTDM_INIT: BT controller compile version [8590fa8]
I (759) system_api: Base MAC address is not set, read default base MAC address from BLK0 of EFUSE
I (879) phy: phy_version: 4180, cb3948e, Sep 12 2019, 16:39:13, 0, 0
I (1119) GATTS_SPP_DEMO: ble_spp_init init bluetooth

I (1249) GATTS_SPP_DEMO: EVT 0, gatts if 3

I (1249) GATTS_SPP_DEMO: event = 0

I (1249) GATTS_SPP_DEMO: gatts_profile_event_handler 491

I (1249) GATTS_SPP_DEMO: gatts_profile_event_handler 494

I (1259) GATTS_SPP_DEMO: gatts_profile_event_handler 497

I (1269) uart: queue free spaces: 10
I (1279) GATTS_SPP_DEMO: EVT 22, gatts if 3

I (1279) GATTS_SPP_DEMO: event = 16

I (1279) GATTS_SPP_DEMO: The number handle =b

E (1289) GATTS_SPP_DEMO: [gap_event_handler,466]GAP_EVT, event 4

I (1289) GATTS_SPP_DEMO: EVT 12, gatts if 3

I (1299) GATTS_SPP_DEMO: event = c

E (1309) GATTS_SPP_DEMO: [gap_event_handler,466]GAP_EVT, event 6

I (9659) GATTS_SPP_DEMO: EVT 14, gatts if 3

I (9659) GATTS_SPP_DEMO: event = e

E (10399) GATTS_SPP_DEMO: [gap_event_handler,466]GAP_EVT, event 20

E (10699) GATTS_SPP_DEMO: [gap_event_handler,466]GAP_EVT, event 20

I (19509) GATTS_SPP_DEMO: EVT 2, gatts if 3

I (19509) GATTS_SPP_DEMO: event = 2

I (19509) GATTS_SPP_DEMO: ESP_GATTS_WRITE_EVT : handle = 7

[gatts_profile_event_handler,517]spp_mtu_size:23,p_data->write.value:mali-test espressif,len:19
[gatts_profile_event_handler,520]ESP_GATTS_WRITE_EVT spp_cmd_buff:mali-test espressif
[spp_cmd_task,442]xQueueReceive receive data from client and free buffer
ssid:mali-test,password:espressif
I (19529) GATTS_SPP_DEMO: mali-test espres
I (19539) GATTS_SPP_DEMO: sif
I (19549) wifi:wifi driver task: 3ffdbe68, prio:23, stack:6656, core=0
I (19549) system_api: Base MAC address is not set, read default base MAC address from BLK0 of EFUSE
I (19559) system_api: Base MAC address is not set, read default base MAC address from BLK0 of EFUSE
I (19599) wifi:wifi firmware version: 9156a0d
I (19599) wifi:config NVS flash: enabled
I (19599) wifi:config nano formating: disabled
I (19599) wifi:Init data frame dynamic rx buffer num: 32
I (19599) wifi:Init management frame dynamic rx buffer num: 32
I (19609) wifi:Init management short buffer num: 32
I (19609) wifi:Init dynamic tx buffer num: 32
I (19619) wifi:Init static rx buffer size: 1600
I (19619) wifi:Init static rx buffer num: 10
I (19629) wifi:Init dynamic rx buffer num: 32
[mali]wifi_config---ssid:32,password:64
[mali]ssid:mali-test,password:espressif
I (19699) wifi:mode : sta (8c:aa:b5:b8:be:cc)
I (19699) wifi station: wifi_init_sta finished.
I (20919) wifi:new:<5,0>, old:<1,0>, ap:<255,255>, sta:<5,0>, prof:1
I (21929) wifi:state: init -> auth (b0)
I (21939) wifi:state: auth -> assoc (0)
I (21949) wifi:state: assoc -> run (10)
I (21979) wifi:connected with mali-test, aid = 111, channel 5, BW20, bssid = 30:a2:c2:70:27:88
I (21979) wifi:security: WPA2-PSK, phy: bgn, rssi: -41
I (21999) wifi:pm start, type: 1

I (22059) wifi:AP's beacon interval = 102400 us, DTIM period = 1
I (23039) tcpip_adapter: sta ip: 192.168.3.144, mask: 255.255.255.0, gw: 192.168.3.1
I (23039) wifi station: got ip:192.168.3.144
I (23039) wifi station: connected to ap SSID:mali-test password:espressif

```
