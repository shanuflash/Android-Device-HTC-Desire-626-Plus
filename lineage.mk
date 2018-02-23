# Device path
DEVICE_PATH := device/HTC/Desire626G+

# Vendor path
VENDOR_PATH := vendor/HTC/Desire626G+

# Release name
PRODUCT_RELEASE_NAME := Desire626G+

# Inherit some common LineageOS stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, $(DEVICE_PATH)/device.mk)

# Boot animation
TARGET_SCREEN_HEIGHT := 1280
TARGET_SCREEN_WIDTH := 720

# Device identifier. This must come after all inclusions
PRODUCT_DEVICE := Desire626G+
PRODUCT_NAME := lineage_Desire626G+
PRODUCT_BRAND := HTC
PRODUCT_MODEL := HTC Desire 626G+
PRODUCT_MANUFACTURER := MediaTek
