# HTC Desire 626G+

HTC Desire 626G+ device is a Mid-range smartphone from Panasonic.

Basic   | Spec Sheet
-------:|:-------------------------
CPU     | Octa-core 1.7GHz Cortex-A7
GPU     | Mali-450 MP4
Memory  | 1GB RAM
Shipped Android Version | 4.4.2
Storage | 8 GB
Battery | 2000 mAh
Display | 5.3" 720 x 1280 px
Camera  | Rear camera - 13 MP (f/2.2, 28mm), autofocus, LED flash Front - 5 MP, LED flash

This branch is for building LineageOS 14.1 Based ROMs.

## What's working
- [x] FM Radio
- [X] Calls
- [X] USSD code
- [x] WiFi
- [x] Bluetooth
- [x] Video recording -Except Stock cam "Snap"(Use Footej or Camu)
- [x] Camera
- [X] SMS (sending & recieving)
- [x] All sensors
- [x] Offline charging
- [X] 2G/3G switch
- [X] Data connection
- [ ] VPN


# Build Commands :-

  * repo init -u https://github.com/Nougat-mt6592/android.git -b cm-14.1
  * repo sync
  * git clone https://github.com/Nougat-mt6592/Android-Device-HTC-Desire-626-Plus.git -b los14 device/HTC/Desire626G+
  * git clone https://github.com/Nougat-mt6592/Android-Vendor-HTC-Desire-626-Plus.git -b master vendor/HTC/Desire626G+
  * source build/envsetup.sh
  * brunch Desire626G+
  * Done :)
  
  NOTE : For other ROMs -> * apply pacthes manually from https://github.com/Nougat-mt6592 repos by cherry-picking (pick only     those committed with me)
  
# Credits/Thanks to:-
  * GOD For Everything and Anything
  * Yash Pal Joshi for almost everything
  * Fire855 - withou him, we are nothing
  * Tribetmen - N Patches For MT6572 (He is the man Behind LOS14.1 to boot On 3.4.67 Kernel)
  * adi766 - brought up N on MT6572
  * gmcadiom - booted first N on Mt6582
  * DarkKnight6499 - for base device tree and vendor tree
  * kishpatel1998 - for making a new working device tree for MT6582
  * manjotsidhu & badboyarbaz - for making developement ongoing adn fixing RIL
  * EndLess728 - for everything
  * Yashpal Joshi(Shivom)[ME] - for making working trees for MT6592
  * Ur name will be listed here :) :) :) :)
  * Electricity Department - for a frequent power cut
  * Everybody's Internet Provider - for a good very low speed
  * rcrajarshi12 - for damadging the good working device tree
  * Anand.Umap - for his awesome Mic Fix
  * Google - For everthing (you must apprecieate) and The       Awesome Free VPS
